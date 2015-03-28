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
int main(int argc,char* argv[])
{
/*    Person a;
    Person b=a;
    cout<<b.Age<<endl;
    cout<<b.Height<<endl;
*/

    //扩容效率
    vector<Person> personArray;
    for (int i=0;i<4;i++)
    {
        cout<<"before push_back.size="<<personArray.size()<<"   capacity="<<personArray.capacity()<<endl;
        Person a;
        a.SetAge(i);
        a.SetHeight(i);
        personArray.push_back(a);
        cout<<"after push_back.size="<<personArray.size()<<"   capacity="<<personArray.capacity()<<endl;
    }
    //观察执行结果发现，扩容时，复制对象到新的存储区<br/>

    // const，非const迭代器
    // 修改内部元素的值
    const vector<Person>::iterator i0=personArray.begin();
    (*i0).SetAge(10);

    vector<Person>::iterator const citor=personArray.begin();
    cout<<(*citor).GetAge()<<endl;
    (*citor).SetAge(990);
    
    vector<Person>::iterator r_iterator=personArray.begin();
    while(r_iterator!=personArray.end())
    {
        cout<<"age="<<(*r_iterator).GetAge()<<"  height="<<(*r_iterator).GetHeight()<<endl;
        r_iterator++;
    }
    return 0;
}
