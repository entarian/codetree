#include <iostream>
using namespace std;
bool yoon(int y){
    if(y%4==0){
        if(y%100==0){
            if(y%400==0) return 1;
            else return 0;
        }
        return 1;
    }
    return 0;
}
void season(int m){
    switch(m) {
        case 1:
        case 2:
        case 12:
            cout<<"Winter";
            break;
        case 3:
        case 4:
        case 5:
            cout<<"Spring";
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Summer";
            break;
        case 9:
        case 10:
        case 11:
            cout<<"Fall";
            break;
        default:
            break;
    }
}
void date(int y,int m,int d){
    int a;
    if(yoon(y)) a=30;
    else a=29;
    switch (m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(d<32) season(m);
            else cout<<-1;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(d<31) season(m);
            else cout<<-1;
            break;
        case 2:
            if(d<a) season(m);
            else cout<<-1;
            break;
        default:
            cout<<-1;
            break;
    }
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    date(a,b,c);
    // Please write your code here.
    return 0;
}