#include <iostream>
#include <string>
using namespace std;
bool st(string &a){
    string b;
    int asize=a.length()-1;
    for(int i=asize;i>-1;i--){
        b+=a[i];
    }
    if(b==a) return 1;
    else return 0;
}

int main() {
    string c;
    cin>>c;
    if(st(c))cout<<"Yes";
    else cout<<"No";
    
    // Please write your code here.
    return 0;
}