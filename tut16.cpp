#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// Call by reference using pointers
void swapPointer(int* a, int* b){   
    int temp = *a;   
    *a = *b;   
    *b = temp;
}

// Call by reference using c++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 4, b = 5;
    //cout<<"The sum of 4 and 5 is"<<sum(a,b);
    cout<<"The value of a is"<<a<<"and the value of b is"<<b<<endl;
    swapPointer(&a,&b);// This will swap a and b using pointer reference
    swapReferenceVar(a,b);// This will swap a and b using reference variables
    cout<<"The value of a is "<<a<<"and the value of b is"<<b<<endl;
    
    return 0;
}