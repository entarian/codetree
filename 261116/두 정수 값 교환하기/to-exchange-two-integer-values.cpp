#include <iostream>
#include <utility>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b;
}

int main() {
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    // Please write your code here.
    return 0;
}