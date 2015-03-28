/*
*反转
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

    listIntegers.reverse();

    cout<<"Contents of the list afterusing reverse():"<<endl;
    PrintListContents(listIntegers);
    return 0;
}

void PrintListContents(const list<int>& listInput)
{
    if(listInput.size()>0)
    {
        cout<<"{ ";
        
    }
    else
        cout<<"list is empty"<<endl;
}

