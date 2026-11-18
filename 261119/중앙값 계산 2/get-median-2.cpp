#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sort(arr,arr+i+1);
        k=i/2;
        if(i%2==0) cout<<arr[k]<<" ";
    }
    // Please write your code here.
    return 0;
}