#include<iostream>
using namespace std;
int main(){
    int n=3;
    char c= 'A';

    for(int i=0; i<=n; i++){
        for(int j=0;j<=n;j++){
            cout<<c;
            c++;
        }
        cout<<"\n";
    }
    return 0;

}