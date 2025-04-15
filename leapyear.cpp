#include<iostream>
using namespace std;
int main(){
    int y ;
    cout<<"Enter year :- ";
    cin>>y;
    if(y%4==0){
        cout<<y <<" is a leap Year";
    }
    else{
        cout<<y<<" is a non leap year";
    }
    return 0;
}