#include<iostream>
using namespace std;

int main(){
//what is a pointer? ------> data type which holds the address of other data types

int a=3;
int*b = &a;
cout<<"The value of a is "<<&a<<endl;
cout<<"The value of a is "<<b<<endl;

cout<<"The value at address b is "<<b<<endl;
// & -----> (Address of) operator


// * -----> derefernce operator

// Pointer to pointer
int**c = &b;
cout<<"The value of b is "<<&b<<endl;
cout<<"The value of b is "<<c<<endl;
cout<<"The value at address at c is "<<*c<<endl;
cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;


    return 0;
}