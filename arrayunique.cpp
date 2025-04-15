#include<iostream>
using namespace std;
int main(){
    int n[]={1,2,3,1,2,3,4,5,5};
    int size=9,nu;
    for(int i=0;i<size;i++){
        bool c=true;
        for(int j=0;j<size;j++){
            // cout<<j;
            if(n[i]==n[j] && i != j){
                c=false;
                break;
            }
        }
        if(c){
        cout<<n[i]<<endl;
        }
    }
    return 0;
}