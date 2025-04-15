#include<iostream>
using namespace std;
int main(){
    int size= 5,c;
    int marks[size];
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }

    for(int i=0;i<size;i++){
        if(c>marks[i]){
            c=marks[i];
        }
    }
    cout<<"Smallest number in this array is : "<<c;
    return 0;
}