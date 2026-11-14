#include <iostream>
using namespace std;
int a(int n){
    int total=0;
    for(int i=1;i<=n;i++){
        total+=i;
    }
    return total/10;
}

int main() {
    int b;
    cin>>b;
    cout<<a(b);

    // Please write your code here.
    return 0;
}