#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main(){
    char * name;
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name; //释放name指向的内存块

    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    return 0;
}

char * getname(){
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1]; //请求新的内存空间
    strcpy(pn, temp); //将字符串复制到新的内存中

    return pn; //将字符串所在地址返回
}