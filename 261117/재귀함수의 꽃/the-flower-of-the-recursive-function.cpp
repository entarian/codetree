#include <iostream>
using namespace std;
void fgds(int n){
    if(n==0) return;
    cout<<n<<" ";
    fgds(n-1);
    cout<<n<<" ";
}
int main() {
    int n;
    cin>>n;
    fgds(n);
    // Please write your code here.
    return 0;
}