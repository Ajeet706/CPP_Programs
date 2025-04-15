#include<iostream>
using namespace std;
int main(){
    int n=1235,d=0,r=0;
    while(n>0){
        r=(n%10);
        n=n/10;
        d=r+(d*10);
        // cout<<d<<endl;
    }
    cout<<d<<endl;
    return 0;
}