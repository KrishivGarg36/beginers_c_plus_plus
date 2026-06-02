//There are two types of headerfiles :
// 1. System header filess: It cimes with a compiler
#include<iostream>
//  2. User defined header files: It comes with the compiler
// #incclude "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    // Arithematic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of ++ a is "<<++a<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of -- a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators ---> used to assign value to variables
    // int a =3, b=9;
    // char d = 'd'

    // Comparison Operators
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    // Logical Operators
      cout<<"Following are the logical operators in c++"<<endl;
      cout<<"The value of this logical and operator ((a==b)(a<b)) is "<<((a==b) && (a<b))<<endl;
      cout<<"The value of this logical or operator ((a==b) && (a<b)) is "<<((a==b) || (a<b))
      <<endl;  



    return 0;
}
