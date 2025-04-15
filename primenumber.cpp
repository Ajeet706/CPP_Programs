#include<iostream>
using namespace std;
int main(){

    int n=31,c=0;

    if(n==1){
        cout<<n<<" non prime number";
    }
    else{
        for(int i=1; i<=n ; i++){
            if(n%i==0){
                c++;
            }
        }
        if(c>2){
            cout<<n<<" non prime number";
        }
        else{
            cout<<n<<" Prime";
        }

        
    }

    return 0;
}