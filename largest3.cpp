#include<iostream>
using namespace std;
int main(){
    int a=100 , b = 200  , c= 30;

    if(a>b && a>c){
        cout<<"A is greater";
    }
    if(b>a && b>c){
        cout<<"B is greater";
    }
    else{
        cout<<"C is greater";
    }
    return 0;
}