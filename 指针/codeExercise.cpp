#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

struct name
{
    string firstName;
    string lastName;
    char grade;
    int age;
};
struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};


int main(){
    // name * n = new name;
    //1.
    /*
    cout << "What is your first name? ";
    cin >> n->firstName;
    cout << "What is your last name? ";
    cin >> n->lastName;
    cout << "What letter grade do you deserve? ";
    cin >> n->grade;
    cout << "What is your age? ";
    cin >> n->age;

    cout << "Name: " << n->lastName << ", " << n->firstName << "\nGrade: " << n->grade << "\nAge: " << n->age << endl;
    */

    //2.
    /*char firstName[10];
    char lastName[10];
    cout << "What is your first name? ";
    cin.getline(firstName, 10);
    cout << "What is your last name? ";
    cin.getline(lastName, 10);
    cout << "Here's the information in a single string: " << lastName << ", " << firstName << endl;
    */

    //3
    CandyBar snack {"Moncha Munch", 2.3, 350};
    cout << "Brand: " << snack.brand;
    cout << "\nWeight: " << snack.weight;
    cout << "\nCalorie: " << snack.calorie;


}