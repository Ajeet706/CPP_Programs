#include<iostream>
using namespace std;
int main(){
    int n[]={9,5,3,8,6};
    int s=5;
    cout<<"Orignal array: ";
    for(int i=0;i<s;i++){
        cout<<" "<<n[i];
    }
    //loop for sorting
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(n[j]<n[j+1]){
                int t=n[j];
                n[j]=n[j+1];
                n[j+1]=t;
            }
        }
    } 
    cout<<endl;
    cout<<"Sorying array:";
    for(int i=0;i<s;i++){
        cout<<" "<<n[i];
    }

    return 0;
}