#include <iostream>
using namespace std;
int dfas(int arr[],int a){
    if(a==0)return arr[0];
    int d=dfas(arr,a-1);
    if(d>arr[a])return d;
    else return arr[a];
}
int main() {
    int n;
    cin>>n;
    int a=n-1;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<dfas(arr,a);
    // Please write your code here.
    return 0;
}