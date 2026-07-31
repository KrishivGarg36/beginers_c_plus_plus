#include<iostream>
using namespace std;

void g();
int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters 
    cout<<"The sum is"<<sum(num1, num2);
    g();

    
    return 0;
}