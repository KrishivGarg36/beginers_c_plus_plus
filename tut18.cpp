#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    else;
    return fib(n-2) + fib(n-1);

}

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    // Factorial of a number
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n * (n-1)!int a;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    cout<<"The value of factorial of"<<n<<"is "<<factorial(n)<<endl;
    cout<<"The term in fibonacci at position "<<n<<" is "<<fib(n)<<endl;

    
    return 0;
}
