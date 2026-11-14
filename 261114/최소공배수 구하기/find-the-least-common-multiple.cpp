#include <iostream>
using namespace std;
void p(int n,int m){
    int c=0;
    for(int i=1;i<=100;i++){
         if(n%i==0&&m%i==0){
            c=i;
         }
    }
    cout<<n*m/c;
}
int main() {
    int a,b;
    cin>>a>>b;
    p(a,b);
    // Please write your code here.
    return 0;
}