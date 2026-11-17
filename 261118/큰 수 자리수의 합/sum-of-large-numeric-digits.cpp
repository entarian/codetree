#include <iostream>
using namespace std;
int fsd(int n){
    if(n==0) return 0;
    return fsd(n/10)+n%10;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int n=a*b*c;
    cout<<fsd(n);
    
    // Please write your code here.
    return 0;
}