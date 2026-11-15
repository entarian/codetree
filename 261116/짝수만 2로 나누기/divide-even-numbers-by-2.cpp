#include <iostream>
using namespace std;
void di22(int arr[],int a){
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]/2;
        }
        else continue;
    }
    
}

int main() {
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    di22(arr,a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    // Please write your code here.
    return 0;
}