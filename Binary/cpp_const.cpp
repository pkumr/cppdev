//
//  cpp_const.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/24/20.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

// Marking A member function of a class const

class Employee{
private:
    string employeeName;
    mutable string empName;
public:
    Employee(const char * name) : employeeName(name), empName(name)
    {
        cout<< "Initialized string to : " << employeeName << endl;
        cout<< "Initialized mutable string to : " << empName << endl;
    }
    void print() const
    {
        cout<< "Employee Name : " << employeeName << endl;
        //this memeber function is marked const, sot it can not modify
        // a member data! following line will work if we remove const from print()
        //Error : No viable overloaded '='
        //employeeName = string("Parker");
    }
    //mutable can be modified in const member function
    void print2() const
    {
        cout << "Employee Name 2 : " << empName << endl;
        empName = string("Parker");
        cout << "Changed Employee Name 2 : " << empName << endl;
    }
    //const keyword allow overload of same function without const
    void print(){
        employeeName = string("Bruce");
        cout <<employeeName<< endl;
    }
};

int main(){
    // There are two portions in a char *
    //      a. address the pointer points to (*)
    //      b. the characters in that address loaction (char)
    //1. char * (no const used)
    char fname[] = "Peter";
    char lname[] = "Parker";
    
    char * p1 = fname;
    cout << "Initial Value of p1 : " << p1 << endl;
    
    p1[0] = 'Z'; //will change the data
    cout << "Value of p1 after changing data : " << p1 << endl;
    
    p1 = lname; //will change what is pointed to
    cout<< "Value of p1 after changing what it points to : " << p1 << endl;
    
    //2. const char *
    //   const applies to characters alone
    
    char finame[] = "Peter";
    char laname[] = "Parker";
    
    const char * p11 = finame;
    cout << "Initial Value of p1 : " << p1 << endl;
    
    //Error : Read-only variable is not assignable
    //following p11[0] = 'Z' will
    //not be able to change first character of p11[0]
    //p11[0] = 'Z'; //will change the data
    cout << "Value of p1 after changing data : " << p11 << endl;
    
    p11 = laname; //will change what is pointed to
    cout<< "Value of p1 after changing what it points to : " << p11 << endl;
    
    //3. char * const
    //   here const applies to ADDRESS ALONE
    
    char firname[] = "Peter";
    //char lasname[] = "Parker";
    
    char * const p12 = firname;
    cout << "Initial Value of p1 : " << p12 << endl;
    
    p12[0] = 'Z'; //will change the data
    cout << "Value of p1 after changing data : " << p12 << endl;
    
    //Error : Cannot assign to variable 'p12' with const-qualified type 'char *const'
    //p12 = laname; //will change what is pointed to
    cout<< "Value of p1 after changing what it points to : " << p12 << endl;
    
    //4. const char * const
    
    char firsname[] = "Peter";
    //char lastname[] = "Parker";
    
    const char * const p13 = firsname;
    cout << "Initial Value of p1 : " << p13 << endl;
    
    //Error : Cannot assign to variable 'p13' with const-qualified type 'const char *const'
    //p13[0] = 'Z'; //will change the data
    cout << "Value of p1 after changing data : " << p13 << endl;
    
    //Cannot assign to variable 'p13' with const-qualified type 'const char *const'
    //p13 = lastname; //will change what is pointed to
    cout<< "Value of p1 after changing what it points to : " << p13 << endl;
    
    Employee e ("Peter");
    e.print();
    e.print2();
    return 0;
}
