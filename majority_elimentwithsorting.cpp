#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector <int> n ={2,2,1,1,1,2,2};
   int s = n.size();
   sort(n.begin(),n.end());
   int f=1 , a=n[0];

   for(int i=1;i<s;i++){
    if(n[i]==n[i-1]){
        f++;
    }
    else {
        f=1;
        a=n[i];
    }
    if(f>(s/2)){
        cout<<a;
    }
   }
    return 0;
}