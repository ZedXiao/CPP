#include <iostream>
#include <string.h>
using namespace std;

int main(){

    int updates = 6; //int 变量
    int *p_updates; //指针的声明

    p_updates = &updates; //将updates的变量地址赋值给p_updates

    cout << updates << endl; //输出6
    cout << &updates << endl; //输出updates的地址

    cout << p_updates << endl; //输出地址，与&updates的地址相同
    cout << *p_updates <<endl; //输出6，解引用

    //用指针改变值
    *p_updates = *p_updates + 1;
    cout << updates << endl; //输出7

    int* p1, p2; //创建一个指针p1和int变量p2

    /*
    从中可知，int变量updates和指针变量p_updates只不过是同一枚硬币的两面。
    变量updates表示值，并使用&运算符来获得地址；而变量p_updates表示地址，
    并使用*运算符来获得值。由于p_updates指向updates，因此*p_updates和updates完全等价。
    可以像使用int变量那样使用*p_updates。甚至可以将值赋给*p_updates。
    这样做将修改指向的值，即updates。
    可以这样说，p_updates是指针（地址），而*p_updates是int，而不是指针
    */
}