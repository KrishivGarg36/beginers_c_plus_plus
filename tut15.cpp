#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

int main(){
    struct employee rohan;
    ep shubham;
    rohan.eId = 1;
    rohan.favChar = 'c';
    rohan.salary = 160000000;
    cout<<"The value is"<<rohan.eId<<endl;
    cout<<"The value is"<<rohan.salary<<endl;
    cout<<"The value is"<<rohan.favChar<<endl;

    
    return 0;
}