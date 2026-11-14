#include <iostream>
using namespace std;
void sa(int a,int b){
    int num=0;
    for(int i=a;i<=b;i++){
        if(i%2!=0 && i%10!=5){
            if(i%3==0){
                if(i%9==0) num++;
            }
            else    num++;
        }
    }
    cout<<num;
}
int main() {
    int a,b;
    cin>>a>>b;
    sa(a,b);
    // Please write your code here.
    return 0;
}