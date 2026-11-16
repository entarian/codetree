#include <iostream>
using namespace std;
void printnum1(int n){
    if(n==0) return;
    printnum1(n-1);
    cout<<n<<" ";

}
void printnum2(int n){
    if(n==0) return;
    cout<<n<<" ";
    printnum2(n-1);
    

}
int main() {
    int n;
    cin>>n;
    printnum1(n);
    cout<<endl;
    printnum2(n);
    // Please write your code here.
    return 0;
}