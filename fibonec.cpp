#include<iostream>
using namespace std;
int main(){
    int n=10, f1=1,f2=0,f3=0;
    // cout<<f1<<endl;
    for(int i =0; i<=n;i++){
        f3=f1+f2;
        cout<<f3<<endl;
        f1=f2;
        f2=f3;
        
        // cout<<f2<<endl;
    }
    return 0;
}