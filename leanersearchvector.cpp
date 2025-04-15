#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> n={1,4,2,5,6,8,9,0,45,23,40};
    int t=23,p=0;
    for(int i : n){
       if(i==t){
        cout<<"Leaner Serach Position -: "<<p<<endl;
       }
       p=p+1;
    }
    return 0;
}