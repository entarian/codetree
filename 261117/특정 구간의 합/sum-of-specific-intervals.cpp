#include <iostream>
using namespace std;
int arr[10];
void af(int Frist,int End){
    int total=0;
    for(int i=Frist-1;i<End;i++){
        
        total+=arr[i];
    }
    cout<<total;
    total=0;
}
int main() {
    int a,n;
    cin>>a;
    cin>>n;
    arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        int f,e;
        cin>>f>>e;
        af(f,e);
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}