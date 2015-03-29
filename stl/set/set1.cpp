//#include"public.h"
#include<set>
#include<iostream>
using namespace std;


template<typename  Container>
void PrintContents(const Container& stlContainer);

int main()
{
    set<int> setIntegers;
    multiset<int> msetIntegers;

    setIntegers.insert(60);
    setIntegers.insert(-1);
    setIntegers.insert(3000);
    cout<<"Writing the contents of the set of the screen"<<endl;
    PrintContents(setIntegers);

    msetIntegers.insert(setIntegers.begin(),setIntegers.end());
    msetIntegers.insert(3000);

    cout<<"Writing the contents of the multiset to the screen"<<endl;
    PrintContents(msetIntegers);
    cout<<"Number of instance of '3000' in the mulutiset are:"<<endl;
    cout<<msetIntegers.count(3000)<<endl;

    // 通过迭代器修改元素值，语法错误
    set<int>::iterator itor_begin=setIntegers.begin();
//    if (itor_begin!=setIntegers.end())
//        *itor_begin=9999;

    cout<<*itor_begin<<endl;
    PrintContents(setIntegers);

}


template<typename Container>
void PrintContents(const Container& stlContainer)
{
    typename Container::const_iterator iElementLocator=stlContainer.begin();
    while(iElementLocator!=stlContainer.end())
    {
        cout<<*iElementLocator<<endl;
        ++iElementLocator;
    }
    cout<<endl;
}
