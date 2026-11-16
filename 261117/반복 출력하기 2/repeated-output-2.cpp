#include <iostream>
using namespace std;
void printHelloWorld(int n){
    if(n==0)
        return;
    printHelloWorld(n-1);
    cout<<"HelloWorld"<<endl;
}
int main() {
    int n;
    cin>>n;
    printHelloWorld(n);
    // Please write your code here.
    return 0;
}