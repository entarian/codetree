#include <iostream>
using namespace std;
int resd(int n){
    if(n==0) return 0;
    int a=n%10;
    return resd(n/10)+a*a;
}
int main() {
    int n;
    cin>>n;
    cout<<resd(n);
    // Please write your code here.
    return 0;
}