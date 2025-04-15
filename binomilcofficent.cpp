#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i =1; i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int a,n,r;

    cout<<"Enter n value :- ";
    cin>>n;
    cout<<"Enter r value :- ";
    cin>>r;
    a= (fact(n)/(fact(r)*fact(n-r)));
    cout<<a;
    return 0;
}