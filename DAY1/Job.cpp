#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter Your age: " << endl;
    cin >> age;
    cout << "Your age is : " << age << endl;
    if (age<18){
        cout << "Not eligible for job";
    }else if(age<=57){
        cout << "eligible for job, ";
        if(age>=55){
            cout << "but retirement soon";
        }
    }else if(age>57){
        cout << "retirement time";
    }
}