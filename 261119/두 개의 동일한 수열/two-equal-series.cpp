#include <iostream>
#include <algorithm>
using namespace std;
void so(int arr[],int n){
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
}

int main() {
    int n;
    cin>>n;
    int arr[n],brr[n];
    so(arr,n);
    so(brr,n);
    string sd="Yes";
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i]){
            sd="No";
            break;
        }
    }
    cout<<sd;
    // Please write your code here.
    return 0;
}