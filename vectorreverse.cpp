#include <iostream>
#include<vector>
using namespace std;

void rev( vector<int> v){
    for (int i = v.size() - 1; i >= 0; i--) {
        cout<< v[i]<<endl;
    }
}
int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    rev(v);
    return 0;
}
