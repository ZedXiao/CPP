#include <iostream>
#include <string.h>
using namespace std;
int main(){
    /*
        int + ps = new int;   ok
        delete ps;   ok
        delete ps;   not ok now
        int jugs = 5;   ok
        int * pi = &jugs;   ok
        delete pi;   not allowed, memory not allocated by new

        “只能用delete来释放使用new分配的内存。然而，对空指针使用delete是安全的。”


        “使用new和delete时，应遵守以下规则。

        不要使用delete来释放不是new分配的内存。
        不要使用delete释放同一个内存块两次。
        如果使用new [ ]为数组分配内存，则应使用delete [ ]来释放。
        如果使用new [ ]为一个实体分配内存，则应使用delete（没有方括号）来释放。
        对空指针应用delete是安全的。”

    */



    return 0;
}