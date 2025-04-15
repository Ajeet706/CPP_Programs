#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p,t;
    double a,ci;
    float r;
   
    cout<<"Enter Principal : ";
    cin>>p;
    cout<<"Enter Time : ";
    cin>>t;
    cout<<"Enter Rate in % ";
    cin>>r;
    a = p * (pow(((100+r)/100),t));
    ci = a-p;
    cout<<"Compound intrest is :- "<<ci;
    return 0;

}