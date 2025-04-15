#include<iostream>
using namespace std;
int main(){
    int n=20,p;
    for(int i =2 ; i<=n;i++){
        int s=1;
        for(int j=2;j<i;j++){
            p=(i%j);
            s=s*p;
        }
        if(s>=1){
            cout<<i<<endl;
        }
    }
    return 0;
}
