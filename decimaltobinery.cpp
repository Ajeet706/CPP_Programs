#include<iostream>
using namespace std;
int main(){
    int n=42,a=0,r,p=1;
    while(n>0){
        r=(n%2);  
        // cout<<r;
        n=n/2;
        a=a+(r*p);
        p=p*10;
        
    }
    cout<<a;
    return 0;
}