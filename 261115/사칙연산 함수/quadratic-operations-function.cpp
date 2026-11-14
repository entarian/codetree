#include <iostream>

using namespace std;
void sa(int a,char b,int c){
    switch(b){
        case '+':
            cout<<a<<" "<<b<<" "<<c<<" "<<"="<<" ";
            cout<<a+c;
            break;
        case '-':
            cout<<a<<" "<<b<<" "<<c<<" "<<"="<<" ";
            cout<<a-c;
            break;
        case '*':
            cout<<a<<" "<<b<<" "<<c<<" "<<"="<<" ";
            cout<<a*c;
            break;
        case '/':
            cout<<a<<" "<<b<<" "<<c<<" "<<"="<<" ";
            cout<<a/c;
            break;
        default:
            cout<<"False";
            break;

    }
}
int main() {
    int a,c;
    char b;
    cin>>a>>b>>c;
    sa(a,b,c);
    // Please write your code here.
    return 0;
}