#include<iostream>
using namespace std;
int main(){
    int n = 121 , r=0 ;
    int t = abs(n);
    while(t != 0){
    r = (r*10)+(t%10);
    t = t/10;
    
    }
    if(n==r){
        cout<<r <<" number is Palindrome ";
    }
    else{
        cout<<r <<" number is not palindrome ";
    }
    
    return 0;

}