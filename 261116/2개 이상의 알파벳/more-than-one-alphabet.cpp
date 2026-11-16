#include <iostream>
#include <string>
using namespace std;
bool apa(string a){
    int d=0;
    for(int i=0;i<a.length()-1;i++){
        if(a[i]==a[i+1]) continue;
        else d++;
    }
    if(d==0) return 0;
    else return 1;
}
int main() {
    string a;
    cin>>a;
    if(apa(a)) cout<<"Yes";
    else cout<<"No";
    // Please write your code here.
    return 0;
}