#include <iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0)return arr[0];
    int d=sum(arr,n-1);
    for(int i=arr[n];i>0;i--){
        if(arr[n]%i==0&&d%i==0){
            d*=arr[n]/i;
            break;
        }
        if(i==1) {
            d*=arr[n];
            break;
        }           
}
    return d;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<sum(arr,n-1);
    // Please write your code here.
    return 0;
}