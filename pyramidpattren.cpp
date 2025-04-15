#include<iostream>
using namespace std;
int main(){
    int n=8;
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k =0;k<=i;k++){
            cout<<num;
            num++;
        }
        for(int m =i; m>=1;m--){
            cout<<m;
        }
        cout<<endl;
    }
    
    return 0;
}