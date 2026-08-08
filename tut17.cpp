#include<iostream>
using namespace std;

inline int product(int a, int b){
    static int c=0;
    c = c + 1;
    return a*b+c;

}
float moneyreceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b; 
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    cout<<"The product of a and b is"<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have"<<money<<" Rs in your bank account, you will receive"<<moneyreceived(money)<<" Rs after 1 year";
    cout<<"For VIP: If you have"<<money<<" Rs in your bank account, you will receive"<<moneyreceived(money, 1.10)<<" Rs after 1 year";

    return 0;
}