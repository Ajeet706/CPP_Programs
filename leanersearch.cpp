#include<iostream>
using namespace std;
int main(){
    int n[]={4,2,7,8,1,2,5};
    int size = 7,f;
    int t= 8;
    for(int i=0;i<size;i++){
        if(t==n[i]){
            f=i;
            break;
                }
        else {
            f=-1;
        }
    }
    cout<<f;
    return 0;
}