#include <iostream>
using namespace std;
void date(int a,int b){
    switch (a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(b<32){
                cout<<"Yes";
            }
            else cout<<"No";
            
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(b<31){
                cout<<"Yes";
            }
            else cout<<"No";
            break;
        case 2:
            if(b<29){
                cout<<"Yes";
            }
            else cout<<"No";
            break;
        default:
            cout<<"No";
            break;
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    date(a,b);
    // Please write your code here.
    return 0;
}