#include <iostream>
using namespace std;
int je(int n,int m){
    int sum=1;
    for (int i=0;i<m;i++){
        sum=sum*n;
    }
    return sum;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<je(a,b);
    // Please write your code here.
    return 0;
}