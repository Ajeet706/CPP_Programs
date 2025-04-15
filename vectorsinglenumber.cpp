#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 0;
    vector<int> v = {1,2,3,1,2,3,4,4,8};
    for(int i:v){
        a=a^i;
    }cout<<a<<endl;
    return 0;
}