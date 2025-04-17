#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> n ={1,2,1,1,1};
     for(int v : n){
        int f=0;
        for(int e:n){
            if(v==e){
                f++;
            }
        }
        if(f>((n.size())/2)){
            cout<<f;
            break;
        }
     }
     return 0;
}