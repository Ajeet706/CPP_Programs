#include<iostream>
using namespace std;
int sumn(int n){
    int s=0;
    for(int i=0;i<=n;i++){
        s=i+s;
        }
        return s;

}
int main(){
    int m ;
    m= sumn(10);
    cout<<m;
    return 0;
}