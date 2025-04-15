#include<iostream>
using namespace std;
int digit(int n){
    int d=0;
    while(n>0){
       int  l=(n%10);
        n=(n/10);
        d=d+l;
    }
    return d;
}
int main(){
    int a;
    a= digit(143);
    cout<<a;
    return 0;
}