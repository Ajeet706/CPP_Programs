#include<iostream>
using namespace std;
int main(){
    int n=30, i =0;
    while(n>2){
        int k=n%2;
        n=n/2;
        // cout<<n<<endl;
         i = i+k;
        
    }
    if(i==0){
        cout<<n<<" true";
    }
    else {
        cout<<n<<" false";
    }
    return 0;
}