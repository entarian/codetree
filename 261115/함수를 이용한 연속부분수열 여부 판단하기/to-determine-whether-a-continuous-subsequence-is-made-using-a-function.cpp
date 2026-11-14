#include <iostream>
using namespace std;
bool is_Met(int a,int b,int am[],int bm[]){
    int num;
    for(int i=0;i<a;i++){
        num=0;
        for(int r=0;r<b;r++){
            if(am[i+r]==bm[r]) num++;
        }
        if(num==b) {
            return 1;
            break; 
            }
        else continue;
    }
    return 0;
}
int main() {
    int a,b;
    cin>>a>>b;
    int am[a];
    int bm[b];

    for(int i=0;i<a;i++){
        cin>>am[i];
    }
    for(int i=0;i<b;i++){
        cin>>bm[i];
    }
    if(is_Met(a,b,am,bm))cout<<"Yes";
    else cout<<"No";
    // Please write your code here.
    return 0;
}