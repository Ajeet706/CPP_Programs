#include<iostream>
using namespace std;
int leaner(int n[],int size,int t){
    for(int i=0;i<size;i++){
        if(n[i]==t){
            return i;
        }
    }
    return -1;
}
int main(){
    int n[]={4,2,7,8,1,2,5};
    int size=7;
    int t=4,f;
    f=  leaner(n,size,t);
    cout<<f;

    return 0;
}