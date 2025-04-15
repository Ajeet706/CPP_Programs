#include<iostream>
using namespace std;
int main(){
    int n = 111, a=0 , p=1,r=0;
    while(n>0){
        r=n%10;
        n= n/10;
        a=a+(r*p);
        p=p*2;
        // cout<<p;
    }
    cout<<a;
    return 0;
}