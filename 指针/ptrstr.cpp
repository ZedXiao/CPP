#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char animal[20] = "bear";
    const char * bird = "wren"; 
    //1、分配内存给字符指针； 2、分配内存给字符串； 3、将字符串首地址赋值给字符指针
    char * ps;

    cout << animal << " and ";
    cout << bird << "\n";

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;

    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at "<< (int *) ps << endl;
    cout << ps << " at " <<(int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal <<endl; 
    //一般来说，如果给cout提供一个指针，它将打印地址。
    //但如果指针的类型为char *，则cout将显示指向的字符串。
    //如果要显示的是字符串的地址，则必须将这种指针强制转换为另一种指针类型，如int *
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}