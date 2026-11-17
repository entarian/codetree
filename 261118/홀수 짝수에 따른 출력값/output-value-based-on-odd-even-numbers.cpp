#include <iostream>
using namespace std;
int sum(int n){
    if(n==1||n==2) return n;
    if(n%2==0) return sum(n-2)+n;
    if(n%2==1) return sum(n-2)+n;
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    // Please write your code here.
    return 0;
}