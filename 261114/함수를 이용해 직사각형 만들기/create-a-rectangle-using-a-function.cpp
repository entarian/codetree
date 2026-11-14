#include <iostream>
using namespace std;
void p(int a,int b){
    for(int i=0;i<a;i++){
        for(int r=0;r<b;r++){
            cout<<1;
        }
        cout<<endl;
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    p(a,b);
    // Please write your code here.
    return 0;
}