/* pair Sum*/
#include<iostream>
using namespace std;
int main(){
    int n[]={2,7,11,15};
    int size=4;
    int t=9;
    for(int i =0; i<size;i++){
        for(int j=i+1;j<size;j++){
            if(n[i]+n[j]==t){
                cout<<i<<" "<<j;
                break;
            }
        }
        cout<<"\n";
    }
    return 0;
}