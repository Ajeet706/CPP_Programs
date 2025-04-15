#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n[]={4,2,1,7,8,5};
    int size=6;
    int s=INT_MAX;
    int l =INT_MIN;
    int index1,index2;

    for(int i=0;i<size;i++){
        s=min(n[i],s);
        l=max(n[i],l);
    }
    // cout<<"Smallest Number "<<s<<endl;
    // cout<<"Largest Number "<<l;
    for(int i=0;i<size;i++){
        if(n[i]==s){
            index1=i;
            break;
        }
    }
    for(int i=0;i<size;i++){
        if(n[i]==l){
            index2=i;
            break;
        }
    }
    swap(n[index1],n[index2]);
    for(int i=0;i<size;i++){
        cout<<n[i];
    }
    return 0;
}