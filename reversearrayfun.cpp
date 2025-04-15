#include<iostream>
using namespace std;
int main(){
    int n[]={4,2,7,8,1,2,5};
    int size=7;
    int s=0;
    int e=size-1;
    while(e>=s){
        swap(n[s],n[e]);
        s++;
        e--;
    }
    for(int i=0;i<size;i++){
        cout<<n[i];
    }
return 0;
}