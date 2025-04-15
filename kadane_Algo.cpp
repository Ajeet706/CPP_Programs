#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    // maximum subarray sum
    // vector<int> n ={1,4,7,8,5,2};
    int a[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int maxsum = INT_MIN;
    for(int s = 0; s<n;s++){
        int cs=0;
        for(int e =s;e<n;e++){
           cs=cs+a[e];
           maxsum = max(cs,maxsum);
            // cout<<cs<<" ";
        }
        // cout<<endl;
    }
    cout<<maxsum;
    return 0;
}