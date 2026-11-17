#include <iostream>
using namespace std;
int num(int n){
    if(n==1)return 0;
    if(n%2==0) return num(n/2)+1;
    else return num(3*n+1)+1;
}
int main() {
    int n;
    cin>>n;
    cout<<num(n);
    // Please write your code here.
    return 0;
}