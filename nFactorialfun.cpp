#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for (int i=1;i<=n;i++){
        f=i*f;
        }
        return f;
}
int main(){
    int a;
    a=fact(4);
    cout<<a;
    return 0;
}