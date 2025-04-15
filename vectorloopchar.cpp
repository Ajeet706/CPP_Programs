#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> v = {'a','b','c','e'};
    for(char i:v){
        cout<<i<<endl;
    }
    return 0;
}