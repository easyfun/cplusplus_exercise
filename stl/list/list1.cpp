/*
*反转
*反转不会影响迭代器
*/

#include<iostream>
#include<list>
using namespace std;

void PrintListContents(const list<int>& listInput);

int main(int argc,char* argv[])
{
    list<int> listIntegers;

    listIntegers.push_front(4);
    listIntegers.push_front(3);
    listIntegers.push_front(2);
    listIntegers.push_front(1);
    listIntegers.push_front(0);
    listIntegers.push_back(5);
   
    cout<<"Initial contents of the list"<<endl;
    PrintListContents(listIntegers);

    list<int>::const_iterator pos_before_reverse_begin=listIntegers.begin();
    cout<<*pos_before_reverse_begin<<endl<<endl;

    listIntegers.reverse();

    cout<<"Contents of the list afterusing reverse():"<<endl;
    PrintListContents(listIntegers);

    cout<<*pos_before_reverse_begin<<endl<<endl;

    list<int>::const_iterator pos_after_reverse_begin=listIntegers.begin();

    if (pos_before_reverse_begin==pos_after_reverse_begin)
    {
        cout<<"two iterators equal"<<endl;
    }

    cout<<*pos_after_reverse_begin<<endl;
    return 0;
}

void PrintListContents(const list<int>& listInput)
{
    if(listInput.size()>0)
    {
        cout<<"{ ";
        list<int>::const_iterator ci;
        for (ci=listInput.begin();
            ci!=listInput.end();
            ci++)
        {
            cout<<*ci<<" ";
        }
        cout<<"}"<<endl<<endl;
    }
    else
        cout<<"list is empty"<<endl;
}

