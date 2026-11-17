#include <iostream>
using namespace std;
int ds(int n){
    if(n==1) return 0;
    if(n%2==0)
        return ds(n/2)+1;
    else if(n%2==1)
        return ds(n/3)+1;
}
int main() {
    int n;
    cin>>n;
    cout<<ds(n);
    // Please write your code here.
    return 0;
}