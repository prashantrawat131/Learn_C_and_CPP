#include <bits/stdc++.h>

#include <queue>

using namespace std;

void bfs(vector<int> *v, int root, int nodeToFind, int *dist, queue<int> q)
{
    (*dist)++;
    for (auto &x : v[root])
    {
        if (x == nodeToFind)
        {
            return;
        }
        q.push(x);
    }
    int next = q.front();
    q.pop();
    bfs(v, next - 1, nodeToFind, dist, q);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.get();
        vector<int> v[n];
        for (int i = 0; i < n; i++)
        {
            string s;
            getline(cin, s);
            istringstream iss(s);
            int num;
            while (iss >> num)
            {
                v[i].push_back(num);
            }
        }

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < v[i].size(); j++) {
        //         cout << v[i].at(j) << " ";
        //     }
        //     cout << "\n";
        // }

        // finding the index of node with max neighbours
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            // cout<<"Size for i="<<i<<" is "<<v[i].size()<<endl;
            if (v[index].size() < v[i].size())
            {
                index = i;
            }
        }

        // cout<<"Index = "<<index<<endl;

        // counting avg distance from the popular node
        int dist = 0;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            bfs(v, index, i + 1, &dist, q);
        }
        double avgDist = (double)dist / (double)n;
        cout << (index + 1) << " " << avgDist << endl;
    }
}