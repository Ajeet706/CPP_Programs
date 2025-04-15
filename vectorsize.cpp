#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,22,3,4,7,8,5,9,6};
    int a,b,c;
    // v.push_back(20);
    // v.pop_back();
    a=v.front();
    b=v.back();
    c=v.at(5);
    cout<<c<<endl;
    cout<<"Size of Vector is :- "<<v.size();
    return 0;
}