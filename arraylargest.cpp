#include<iostream>
using namespace std;
int main(){
    int size = 7,c=0;
    int m[7] = {2,3,15,24,88,9,7};
    for(int i = 0; i<size;i++){
        if(c<m[i]){
        c = m[i];
        }    
    }
    cout<<c<<endl;
    return 0;
}