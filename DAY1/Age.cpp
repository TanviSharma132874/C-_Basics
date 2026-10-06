#include <bits/stdc++.h>
using namespace std;

int main(){
    // write a program that takes an input of age
    // and prints if you are adult or not
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Your age is: " << age << endl;
    if(age>18){
        cout << "You are an adult...";
    }else{
        cout << "You are not an adult...";
    }

    return 0;
}