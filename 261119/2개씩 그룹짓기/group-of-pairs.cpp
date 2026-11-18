#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int N=2*n;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);
    int ars[n];
    for(int i=0;i<n;i++){
        ars[i]=arr[i]+arr[N-i-1];
    }
    sort(ars,ars+n);
    cout<<ars[n-1];
    // Please write your code here.
    return 0;
}