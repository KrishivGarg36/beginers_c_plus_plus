#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<end1;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You cannot come to my party"<<end1;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<end1;
    }
    else if(age<1){
        cout<<"You are not yet born"<<end1;
    }
    else{
        cout<<"You can come to the party"<<end1;

    }
    return 0;
}


