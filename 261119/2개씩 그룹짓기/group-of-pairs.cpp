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
    int Max_sum=0;
    for(int i=0;i<n;i++){
        Max_sum=max(Max_sum,arr[i]+arr[N-i-1]);
    }
    cout<<Max_sum;
    // Please write your code here.
    return 0;
}