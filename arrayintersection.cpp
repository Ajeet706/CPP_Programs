#include<iostream>
using namespace std;
int main(){
    int n1[]={1,2,3,4,5};
    int n2[]={6,7,3,1};
    int s1=5 , s2=4;
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(n1[i]==n2[j]){
                cout<<n1[i];
            }
        }
        // cout<<endl;
    }
    return 0;
}