/*
*扩容对性能的影响
*/

#include<iostream>
#include<vector>
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

public:
    int Age;
    int Height;
};
int main(int argc,char* argv[])
{
/*    Person a;
    Person b=a;
    cout<<b.Age<<endl;
    cout<<b.Height<<endl;
*/
    vector<Person> personArray;
    for (int i=0;i<4;i++)
    {
        cout<<"before push_back.size="<<personArray.size()<<"   capacity="<<personArray.capacity()<<endl;
        Person a;
        personArray.push_back(a);
        cout<<"after push_back.size="<<personArray.size()<<"   capacity="<<personArray.capacity()<<endl;
    }
    //观察执行结果发现，扩容时，复制对象到新的存储区<br/>

    return 0;
}
