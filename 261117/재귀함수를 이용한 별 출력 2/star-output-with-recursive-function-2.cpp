#include <iostream>
using namespace std;
void fd(int n){
    if (n==0) return;
    for(int i=n;i>0;i--){
        cout<<"* ";
    }
    cout<<endl;
    fd(n-1);
    for(int i=n;i>0;i--){
        cout<<"* ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    fd(n);
    // Please write your code here.
    return 0;
}