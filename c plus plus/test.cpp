#include <bits/stdc++.h>

#include <queue>

using namespace std;

void bfs(vector < int > * v, pair < int, int > root, int nodeToFind, int * dist, queue < pair < int, int > > q) {
    if (q.empty()) {
        ( * dist) ++;
    } else if (root.first != q.front().first) {
        ( * dist) ++;
    }
    // cout << "\nFor root = " << root << endl;
    for (auto & x: v[root.second])
    {
        // cout << x << " ";
        if (x == nodeToFind)
        {
            return;
        }
        q.push(pair(root.second, x));
    }
    int next = q.front().second;
    q.pop();
    bfs(v, pair(root.second, next - 1), nodeToFind, dist, q);
}

void minDist(vector < int > * v, int root, int n, int * dist, queue < pair<int,int> > q)
{
    for (int i = 0; i < n; i++) {
        bfs(v, pair(-1, root), i + 1, dist, q);
    }
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
        vector < int > v[n];
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

        // counting avg distance from the popular node
        int dist = 0;
        queue < pair<int, int> > q;
        minDist(v, index, n, & dist, q);

        double avgDist = (double) dist / (double) n;
        cout << (index + 1) << " " << avgDist << endl;
    }
}