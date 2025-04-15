#include<iostream>
using namespace std;
int minfun(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x;
    x=minfun(9,75);
    cout<<x<<endl;
    return 0;
}