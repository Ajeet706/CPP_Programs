#include<iostream>
using namespace std;
int main(){
    int n[]={4,2,1,7,8,5};
    int size = 6,p=1;
    for(int i=0;i<=size;i++){
        p=p*n[i];
    }
    cout<<p<<"App array Product ";
    return 0;
}