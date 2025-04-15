#include<iostream>
using namespace std;
int main(){
    int n[]={4,2,1,7,8,1,5};
    int size=7,s=0;
    for(int i=0;i<size;i++){
        s=s+n[i];
    }
    cout<<s<<" All Array Sum";
    return 0;
}