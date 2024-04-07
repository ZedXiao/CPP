#include <iostream>
#include <string.h>
using namespace std;
struct test{
    string role; 
    int number;
    char name[20];
};
union test1
{
    int int_val;
    long long_val;
    double double_val;
};

int main(){

    int updates = 6;
    int *p_updates;

    p_updates = &updates;

}