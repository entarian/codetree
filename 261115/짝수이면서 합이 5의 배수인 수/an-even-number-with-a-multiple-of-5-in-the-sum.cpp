#include <iostream>
using namespace std;
void YesorNo(int n){
    if(n%2==0){
        int a=n/10+n%10;

        if(a%5==0){
            cout<<"Yes";
        }
        else
            cout<<"No";
}
    else
    cout<<"No";
}
int main() {
    int a;
    cin>>a;
    YesorNo(a);
    // Please write your code here.
    return 0;
}