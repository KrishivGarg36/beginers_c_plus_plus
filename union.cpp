#include<iostream>
using namespace std;

union money
{
    /*data*/
    int rice;
    char car;
    float pounds;

};
int main(){
    union money m1;
    cout<<m1.rice;
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    
    return 0;
}