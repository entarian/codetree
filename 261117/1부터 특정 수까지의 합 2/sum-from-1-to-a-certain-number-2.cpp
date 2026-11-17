#include <iostream>
using namespace std;
int ds(int n){
    if (n==1){
        return 1;
    }
    return ds(n-1)+n;
}

int main() {
    int n;
    cin>>n;
    cout<<ds(n);

        // Please write your code here.
    return 0;
}