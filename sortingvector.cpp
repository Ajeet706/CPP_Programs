#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> n = {9,5,3,8,6};
    int s=n.size();
    cout<<"Original array: ";
    for(int i:n){
        cout<<" "<<i;
    }
    cout<<endl;
    sort(n.begin(),n.end());
    cout<<"Sorted array:";
    for(int i:n){
        cout<<" "<<i;
    }
    cout<<endl;
    return 0;
}