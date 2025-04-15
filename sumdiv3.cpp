#include<iostream>
using namespace std;
int main(){
    int n =20,i, sum=0;
    for(i=1;i<=n;i++){
        // cout<<i<<"\n";
        if(i%3==0){
            // cout<<i<<"\n";
            sum = sum + i;
            // cout<<sum;
        }
    }
    cout<<"Sum is "<<sum;

    return 0;

}