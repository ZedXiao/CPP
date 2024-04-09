#include <iostream>
#include <vector>
#include <array>
#include <string.h>
using namespace std;

//8、
struct fish
{
    string variety;
    int weight;
    double extent;
};

int main(){
    /*
    1．如何声明下述数据？
        a．actor是由30个char组成的数组。
        b．betsie是由100个short组成的数组。
        c．chuck是由13个float组成的数组。
        d．dipsea是由64个long double组成的数组。
    */
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

    /*
    2．使用模板类array而不是数组来完成问题1。
    */
    array<char, 30> actor1;
    array<short, 100> betsie1;
    array<float, 13> chuck1;
    array<long double, 64> dipsea1;

    /*
    3．声明一个包含5个元素的int数组，并将它初始化为前5个正奇数。
    */
    int p1[5] = {1, 3, 5, 7, 9};

    /*
    4．编写一条语句，将问题3中数组第一个元素和最后一个元素的和赋给变量even。
    */
    int even = p1[0] + p1[4];

    /*
    5．编写一条语句，显示float数组ideas中的第2个元素的值。
    */
    float ideas[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
    cout << ideas[1] << endl;

    /*
    6．声明一个char的数组，并将其初始化为字符串“cheeseburger”。
    */
    char c1[13] = "cheeseburger";
    cout << c1 << endl;

    /*
    7．声明一个string对象，并将其初始化为字符串“Waldorf Salad”。
    */
    string s1 = "Waldorf Salad";
    cout << s1 << endl;

    /*
    8．设计一个描述鱼的结构声明。结构中应当包括品种、重量（整数，单位为盎司）和长度（英寸，包括小数）。
    9．声明一个问题8中定义的结构的变量，并对它进行初始化。
    */
    fish f1 = {"black fish", 5, 10.2};
    cout << "\nVariety: " << f1.variety << endl;
    cout << "Weight: " << f1.weight << endl;
    cout << "Extent: " << f1.extent << endl;
    cout << "\n";
    /*
    10．用enum定义一个名为Response的类型，它包含Yes、No和Maybe等枚举量，其中Yes的值为1，No为0，Maybe为2。
    */
    enum Response {Yes = 0, No = 1, Maybe = 2};

    /*
    11．假设ted是一个double变量，请声明一个指向ted的指针，并使用该指针来显示ted的值。
    */
    double ted = 29.99;
    double * p_ted = &ted;
    cout << *p_ted << endl;
    /*
    12．假设treacle是一个包含10个元素的float数组，请声明一个指向treacle的第一个元素的指针，并使用该指针来显示数组的第一个元素和最后一个元素。
    */
    float treacle[10] = {1,2,3,4,5,6,7,8,9,10};
    float * p_treacle = treacle;
    cout << "\n" << *p_treacle << " : " << *(p_treacle + 9) << endl;

    /*
    13．编写一段代码，要求用户输入一个正整数，然后创建一个动态的int数组，其中包含的元素数目等于用户输入的值。首先使用new来完成这项任务，再使用vector对象来完成这项任务。
    */
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int * p_n = new int [n];
    delete [] p_n;
    //-------------
    cout << "Enter a number: ";
    cin >> n;
    vector<int> p_n1[n];

    /*
    14．下面的代码是否有效？如果有效，它将打印出什么结果？
        有效，结果为地址：0x100003e2a
    */
    cout << (int *) "Home of the jolly bytes" << endl;

    /*
    15．编写一段代码，给问题8中描述的结构动态分配内存，再读取该结构的成员的值。
    */
    fish * f2 = new fish;
    f2->variety = "silver carp";
    f2->weight = 4;
    f2->extent = 20.7;
    cout << "\nVariety: " << f2->variety << endl;
    cout << "Weight: " << f2->weight << endl;
    cout << "Extent: " << f2->extent << endl;
    cout << "\n";

    /*
    16. 如果将下面代码
    cin.getline(address,80);
    替换为
    cin >> address;
    将对程序带来什么影响？

    cin >> address;不能读入空格、制表符、换行符等。
    */

    /*
    17．声明一个vector对象和一个array对象，它们都包含10个string对象。
    指出所需的头文件，但不要使用using。使用const来指定要包含的string对象数。
    #include <vector>
    #include <array>
    #include <string.h>
    */
    const int number = 10;
    vector<string> v1[number];
    array<string, number> a1;
}