#include <iostream>
using namespace std;
void p(int n){
    int a=1;
    for(int i=0;i<n;i++){
        for(int r=0;r<n;r++){
            if(a==10){
                a=1;
            }
            cout<<a<<" ";
            a++;
        }
        cout <<endl;
    }
}
int main() {
    int b;
    scanf("%d",&b);
    p(b);
    // Please write your code here.
    return 0;
}