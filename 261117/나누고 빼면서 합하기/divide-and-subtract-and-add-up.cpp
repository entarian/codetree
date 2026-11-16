#include <iostream>
using namespace std;
void as(int a,int arr[]){
    int total=0;
    while(a>0){
        total+=arr[a-1];
        if(a%2==0){
            a/=2;
            continue;}
        else if(a%2==1) {
            a--;
            continue;

        }
            
        if(a==1)break;
    }
    cout<<total;
}
int main() {
    int a,b;
    cin>>a;
    int arr[a];
    cin>>b;
    for(int i=0;i<a;i++) {
        cin>>arr[i];
    }
    as(b,arr);
    // Please write your code here.
    return 0;
}