/*
*删除元素，查看对象析构函数的调用
*/

#include<iostream>
#include<vector>
#include"person.h"
using namespace std;

int main(int argc,char* argv[])
{
    Person ap; 
    vector<Person> psVector;
    psVector.push_back(ap);
    //psVector析构时，保存的Person对象先会析构

    psVector.pop_back();
    //从vector删除对象元素，会先调用对象的析构函数
    return 0;
}
