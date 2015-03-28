#include<iostream>
using namespace std;

class Person
{
public:
    Person():Age(0)
    ,Height(0)
    {
        cout<<"Person constructor"<<endl;
    }
    Person(const Person& ps)
    {
        cout<<"Person copy constructor"<<endl;
        Age=ps.Age;
        Height=ps.Height;
    }

    ~Person()
    {
        cout<<"Person destroy constructor"<<endl;
    }

    int GetAge() const
    {
        return Age;
    }

    int GetHeight() const
    {
        return Height;
    }

    void SetAge(int age)
    {
        Age=age;
    }

    void SetHeight(int height)
    {
        Height=height;
    }

private:
    int Age;
    int Height;
};
