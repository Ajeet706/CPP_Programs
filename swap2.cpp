#include<iostream>
using namespace std;
int main(){
    int a = 20, b=90 ;
    //  using third variable --
    // int c = 0;
    // c= a;
    // a=b;
    // b=c;

    // dont use third variavle

    b=a+b;
    a=b-a;
    b=b-a;

    cout<<"a "<<a<<" b "<<b;
    return 0;

}