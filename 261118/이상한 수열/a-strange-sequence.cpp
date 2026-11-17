#include <iostream>
using namespace std;
int num(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return num(n-1)+num(n/3);
}

int main() {
    int n;
    cin>>n;
    cout<<num(n);
    // Please write your code here.
    return 0;
}