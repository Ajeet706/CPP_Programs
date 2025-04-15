#include<iostream>
using namespace std;
int main(){
    int n = 5 , f = 1;
    for(int i=1; i<=n;i++){
        // cout<<i<<"\n";
        f=f*i;
        // cout<<f<<"\n";
    }
    cout<<n<<" number factorial is :- "<<f;
    return 0;
}