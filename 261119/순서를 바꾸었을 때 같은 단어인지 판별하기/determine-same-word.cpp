#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a.compare(b)==0) cout<<"Yes";
    else cout<<"No";

    // Please write your code here.
    return 0;
}