#include <iostream>
using namespace std;
void v(int &a,int &b){
    a+=25;
    b*=2;
}
int main() {
    int a,b;
    cin>>a>>b;
    if(a>b) v(a,b);
    else v(b,a);
    cout<<a<<" "<<b;
    // Please write your code here.
    return 0;
}