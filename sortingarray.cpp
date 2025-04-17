#include<iostream>
using namespace std;
int main(){
    int n[]={9,5,3,8,6};
    int s=5;
    cout<<"Original array: ";
    for(int i=0;i<s;i++){
        cout<<" "<<n[i];
    }
    cout<<endl;
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            // cout<<" "<<n[j];
            // cout<<" "<<n[j+1];
            if(n[j]>n[j+1]){
                int t =n[j];
                n[j]=n[j+1];
                n[j+1]=t;
            }
        }
    }
    cout<<endl;
    cout<<"Sorting array: ";
    for(int i=0;i<s;i++){
        cout<<" "<<n[i];
    }
    cout<<endl;
    return 0;
}