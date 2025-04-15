#include<iostream>
using namespace std;
int main(){
    int n = 11,p,s=1;
    for(int i =2;i<n;i++){
         p = n%i;
         s=p*s;
    }
    if(s==0){
        cout<<"Non prime number";
    }
    else{
        cout<<"prime number";
    }


    return 0;
}