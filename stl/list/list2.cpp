/*
*调用list容器的sort方法
*将整型list按升序和将序排序
*排序不影响迭代器
*/

#include<list>
#include"public.h"
#include<iostream>
using namespace std;

bool SortPredicate_Descending(const int& lsh,const int& rsh);

int main()
{
    list<int> listIntegers;

    listIntegers.push_front(444);
    listIntegers.push_front(300);
    listIntegers.push_front(21111);
    listIntegers.push_front(-1);
    listIntegers.push_front(0);

    listIntegers.push_back(-5);

    cout<<"Initial contents of the list are"<<endl;
    PrintListContents(listIntegers);

    list<int>::iterator pos_iterator=listIntegers.begin();
//    list<int>::const_iterator pos_iterator=listIntegers.begin();
    cout<<"pos="<<*pos_iterator<<endl<<endl;

    listIntegers.sort();

    cout<<"Order of elements after sort()"<<endl;
    PrintListContents(listIntegers);
    
    cout<<"pos="<<*pos_iterator<<endl<<endl;

    listIntegers.sort(SortPredicate_Descending);
    cout<<"Order of elements after sort() with a predicate"<<endl;
    PrintListContents(listIntegers);

    cout<<"pos="<<*pos_iterator<<endl<<endl;
    *pos_iterator=200;
    cout<<"change value by iterator"<<endl;
    PrintListContents(listIntegers);
    return 0;
}

bool SortPredicate_Descending(const int& lsh,const int& rsh)
{
    return rsh<lsh;
}
