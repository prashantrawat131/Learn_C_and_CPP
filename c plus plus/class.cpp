#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    float height;

protected:
    string job;

public:
    static int count;

    Person(string name, float height, string job)
    {
        // Parameterized constructor for Person class
        this->name = name;
        this->height = height;
        this->job = job;
        count++;
    }

    Person()
    {
        // Constructor for Person class
        count++;
    }

    ~Person()
    {
        // Destructor for Person class
        cout << "Destructor of Person class" << endl;
    }

    Person(const Person &obj)
    {
        this->name = obj.name;
        this->height = obj.height;
        this->job = obj.job;
        count++;
    }

    string getName()
    {
        return name;
    }

    void setName(string newName)
    {
        name = newName;
    }

    void setHeight(float height)
    {
        this->height = height;
    }

    void setJob(string job)
    {
        this->job = job;
    }

    float getHeight();

    friend void printEverything(Person person);

    friend class God;

    static void printCount()
    {
        /*
        This is a static funciton. It can use the this operator.
        It can only access static variables.
        It can be used even without any object of the class.
        */

        cout << "Count = " << count << endl;
    }
};

class God
{
public:
    void printDetails(Person &p)
    {
        // Here god can access the private data because it is a friend class.
        cout << "God is calling you " << p.name << endl;
    }
};

float Person::getHeight()
{
    return height;
}

void printEverything(Person person)
{
    // Here the friend function is using private members directly.
    cout << "Name:" << person.name << " Height:" << person.height << " Job:" << person.job << endl;
}

// Static variables need to be defined outside the class
int Person::count = 0;

int main()
{
    // Initializing with Default constructor
    Person p = Person();
    p.setHeight(6.1f);
    p.setName("Raman");
    p.setJob("Cricketer");
    cout << "Person name is " << p.getName() << " and height is " << p.getHeight() << endl;

    // Initializing with parameterized construcor
    Person p1 = Person("Prashant", 5.5f, "Developer");
    cout << "Person name is " << p1.getName() << " and height is " << p1.getHeight() << endl;
    p1.setName("Honey");
    p1.setJob("Singer");
    cout << "New Name is " << p1.getName() << endl;

    // Initializing with copy constructor
    Person p2 = Person(p1);
    cout << "Person name is " << p2.getName() << " and height is " << p2.getHeight() << endl;

    // Using the friend function
    printEverything(p2);

    // Using the friend class
    God g = God();
    g.printDetails(p);

    // Using pointer for class instantiation
    Person *ptr = &p2;
    // Keep in mind that to access members using pointer use -> operator
    cout << "Person name is " << ptr->getName() << " and height is " << ptr->getHeight() << endl;

    // using static variable and function
    cout << "Static variable count = " << Person::count << endl;
    Person::printCount();

    return 0;
}