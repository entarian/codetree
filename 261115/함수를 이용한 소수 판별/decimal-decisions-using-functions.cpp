#include <iostream>
using namespace std;
void sa(int a,int b){
    int total=0;
   
    for(int i=a;i<=b;i++){
        int c=0;
        for(int n=i-1;n>1;n--){
            if(i%n==0)
                c++;
        }
        if(c==0) total+=i;
    }
    cout<<total;
}

int main() {
    int a,b;
    cin>>a>>b;
    sa(a,b);
    // Please write your code here.
    return 0;
}