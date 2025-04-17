#include<iostream>
using namespace std;
int main(){
    int n[]={1,2,2,4,4,4,5,4};
    int size=8;
    for(int i =0; i<size;i++){
        int f=0;
        for(int j=0;j<size;j++){
            if(n[i]==n[j]){
                f++;
            }
        }
        if(f==(size/2)){
            cout<<"Fequency is "<<f<<" number is "<<n[i];
            break;
        }else{
            cout<<"there is no any Fequency in this array";
        }

    }
    return 0;
}