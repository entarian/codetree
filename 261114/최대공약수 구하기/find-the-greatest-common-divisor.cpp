#include <iostream>
using namespace std;
void s(int a,int b){
    int c=0;
    int d=0;
    if(a<b){
        c=a;
    }
    else
        c=b;
    for(int i=1;i<=c;i++){
        if(a%i==0){
            if(b%i==0){
                d=i;
                continue;
            }
            continue;
        }
        continue;
    }
    cout<<d;
}
int main() {
    int a,b;
    cin>>a>>b;
    s(a,b);
    // Please write your code here.
    return 0;
}