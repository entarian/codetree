#include <iostream>
using namespace std;
int div(int n){
    if(n==0)
        return 0;
    if(n%10==3||n%10==6||n%10==9)
        return 1;
    else
        return div(n/10);
}
void tes(int a,int b){
    int total=0;
    for(int i=a;i<=b;i++){
        if(i%3==0||div(i)){
            total++;
        }
    }
    cout<<total;
}
int main() {
    int a,b;
    cin>>a>>b;
    tes(a,b);
    // Please write your code here.
    return 0;
}