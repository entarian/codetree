#include <iostream>
using namespace std;
int pibonaci(int n){
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return pibonaci(n-1)+pibonaci(n-2);
}
int main() { 
    int n;
    cin>>n;
    cout<<pibonaci(n);
    // Please write your code here.
    return 0;
}