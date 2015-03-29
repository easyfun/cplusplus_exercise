#ifndef _PUBLIC_SET_H
#define _PUBLIC_SET_H

#include<set>
#include<list>
#include<vector>
#include<map>
using namespace std;

template<typename  Container>
void PrintContents(const Container& stlContainer)
{
    Container::const_iterator iElementLocator=stlContainer.begin();
    while(iElementLocator!=stlContainer.end())
    {
        cout<<*iElementLocator<<endl;
        ++iElementLocator;
    }
    cout<<endl;
};

#endif
