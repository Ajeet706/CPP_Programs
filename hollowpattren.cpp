#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){
        for(int k = 0; k<2*i-1;k++){
            cout<<" ";
        }
        cout<<"*";
    }
        
        cout<<endl;
    }

    for(int l=0;l<n-1;l++){
        for(int m =0;m<l+1;m++){
            cout<<" ";
        }
        cout<<"*";
        if(l!=n-2){
        for(int o =0; o< 2*(n-l)-5;o++){
            cout<<" ";

        }
        cout<<"*";
    }
        cout<<endl;
    }
    return 0;
}