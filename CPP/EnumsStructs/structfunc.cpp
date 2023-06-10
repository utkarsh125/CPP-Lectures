#include <iostream>
using namespace std;

struct Person{

    char name[50];
    int age;
    float salary;


};

void displayData(Person); //func declaration

int main(){

    Person p;
    cout << "Enter Full Name: ";
    cin.get(p.name, 50);

    cout<<"Age: "<<endl;
    cin >> p.age;
    cout<<"Enter Salary: ";
    cin>>p.salary;

    displayData(p);

    return 0;
}

void displayData(Person p){

    cout<<"\nDisplaying Information."<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<< p.age <<endl;
    cout<<"Salary: "<<p.salary;

}
