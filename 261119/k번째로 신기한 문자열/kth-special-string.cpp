#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n,k,b,r=0;
    string a;
    cin>>n>>k>>a;
    b=a.length();
    string arr[n],brr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];}
    for(int i=0;i<n;i++) {
        if(a.compare(0,b,arr[i],0,b)==0) {
            brr[r]=arr[i];
            r++;}
        }
    sort(brr,brr+r);
    cout<<brr[k-1];
    // Please write your code here.
    return 0;
}