
//  main.cpp
//  taschenrechner

#include <iostream>
#include <cmath>

using namespace std;

int main() {
//numbers getting initialised
    float a;
    float b;
    float c;
    
    cout<<"Welcome to my giudline - calcualtor \n";
//starting of asking for number of numbers which he wants to calculate
    cout<<"Please type in your first number: ";
    cin>>a;
    cout<<"Your second number please: ";
    cin>>b;
    
//asking if he wants to calcualte a third number
    char x;
    cout<<"Do your want to set a third number ? (y/n)";
    cin>>x;
    if (x == 'y') {
        cout<<"OK so please anter your third number: ";
        cin>>c;
//normal continue
    } else {
        cout<<"OK no problem, lets calculate togehter";
    }
//which calcualtion option he wants
    char option;
    cout<<"Which option for calcualtion do you want. Please choose one of the following statments \n";
        cout<<" * + - : \n";
    cin>>option;
// ifelse statements for calculation
//multiply
    if (x == 'n' && option == '*') {
        cout<<"The result of your numbers is: "<<a * b<<endl;
    }
    else if (x == 'y' && option == '*') {
        cout<<"The result of your three numbers is: "<<a * b * c<<endl;
    }
//addition
    else if (x == 'n' && option == '+') {
        cout<<"The result of your numbers is: "<<a + b<<endl;
    }
    else if (x == 'y' && option == '+') {
        cout<<"The result of your three numbers is: "<<a + b + c<<endl;
    }
//subtraction
    else if (x == 'n' && option == '-') {
        cout<<"The result of your numbers is: "<<a - b<<endl;
    }
    else if (x == 'y' && option == '+') {
        cout<<"The result of your three numbers is: "<<a - b - c<<endl;
    }
//dividing numbers
    else if (x == ':' && option == ':'){
        cout<<"The result of your numbers is: "<<a / b<<endl;
    } else if (x == 'y' && option == '+'){
        cout<<"The result of your three numbers is: "<<a / b / c<<endl;
    }
//closing
    cout<<"Hope you had fun and you got your result like you wanna have it! Good bye"<<endl;
    int s;
    cout<<"Are you finish now ? (y/n) "<<endl;
    cin>>s;
    if (s == 'y') {
        cout<<"OK nice. See you soon \n";
        system("cls");
    } else {
        cout<<"No problem! Just restart \n";
        cout<<"\n";
        system("clear");
    }
}
