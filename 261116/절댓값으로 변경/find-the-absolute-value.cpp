#include <iostream>
using namespace std;
int ad(int arr[],int a){
    for(int i=0;i<a;i++){
        if(arr[i]<0) arr[i]*=-1;
        else continue;
    }
    return 0;
}
int main() {
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    ad(arr,a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    // Please write your code here.
    return 0;
}