#include <iostream>
using namespace std;
int a=0;
int ds(int n){
    if(n==1) return 0;
    a++;
    if(n%2==0)
        return ds(n/2);
    else if(n%2==1)
        return ds(n/3);
}
int main() {
    int n;
    cin>>n;
    ds(n);
    cout<<a;
    // Please write your code here.
    return 0;
}