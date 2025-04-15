#include<iostream>
using namespace std;
int main(){
    int n=28,i;
    i = n>>2;
    if(i%2==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}