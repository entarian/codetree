#include <iostream>
using namespace std;
bool is_prime(int i){
    int d=1;
    for(int r=i-1;r>1;r--){
        if(i%r==0) d=0;
    }
    return d;
}
bool is_sum(int i){
    int sum=i%10+i/10;
    if (sum%2==0) return 1;
    return 0;
}
int sum(int a,int b){
    int c=0;
    for(int i=a;i<=b;i++){
        if(is_prime(i)&&is_sum(i)){
            c++;
        }
    }
    return c;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    // Please write your code here.
    return 0;
}