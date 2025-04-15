#include<iostream>
using namespace std;
int main(){
    int num[]={5,8,-88,5,4};
    int size=5;
    int s;
    for(int i=0;i<size;i++){
        if(num[i]<s){
            s=num[i];
        }
    }
    for(int i=0;i<size;i++){
        if(s==num[i]){
            cout<<i;
        }
    }
    // cout<<i;
    return 0;
}