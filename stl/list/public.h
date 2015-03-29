#ifndef _PUBLIC_H
#define _PUBLIC_H

#include<list>
#include<iostream>
using namespace std;

//显示整型list元素
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

#endif
