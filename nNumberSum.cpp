#include<iostream>
using namespace std;
int main() {
    int n=5,sum=0;

    // for(int i=1; i<=n; i++){
    //     sum=sum+i;
    //     cout<<i<<" ";
    // }cout<<"sum "<<sum;
    // cout<<"Enter n Number whane to sum - : ";
    // cin>>n;
    int i=1;
    while(i<=n){
        sum=sum+i;  
        i=i+1;
    }cout<<"sum "<<sum;
    // cout<<"the n number total is :-"<<sum;
    return 0;
}