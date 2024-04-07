#include <iostream>
#include <string.h>
using namespace std;
int main(){
    /*
        为数组分配内存的通用格式如下：
        type_name * pointer_name = new type_name [num_elements];
        如: int * psome = new int [10];

        访问动态数组：psome[0],psome[1]……
    */

   double * p3 = new double [3];
   p3[0] = 0.2;
   p3[1] = 0.5;
   p3[2] = 0.8;
   cout << "p3[1] is " << p3[1] << ".\n";
   cout << "p3[0] is " << p3[0] << ".\n";
   p3 = p3 + 1; //okay for pointers, wrong for array names;
   cout << "Now p3[0] is " << p3[0] << " and ";
   cout << "p3[1] is " << p3[1] << ".\n";
   p3 = p3 - 1;
                /*指针回到开始 请注意将p3加1的效果。
                表达式p3[0]现在指的是数组的第2个值。
                因此，将p3加1导致它指向第2个元素而不是第1个。
                将它减1后，指针将指向原来的值，
                这样程序便可以给delete[ ]提供正确的地址。
                */
   delete [] p3;

    return 0;
}