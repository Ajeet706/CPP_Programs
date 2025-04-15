#include<iostream>
using namespace std;
int main(){
    int n[]={1,2,1,2,4,4,7};
    int size=7;
    for(int i=0;i<size;i++){
        bool d=true;
        for(int j=0;j<size;j++){
            if(n[i]==n[j] && i!= j){
                d=false;
                break;
            }
        }
        if(d){
            cout<<n[i]<<endl;
        }
    }
    return 0;

}