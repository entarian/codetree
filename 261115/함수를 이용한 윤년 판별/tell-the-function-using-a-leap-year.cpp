#include <iostream>
using namespace std;
bool yoon(int y){
    if(y%4!=0) return false;
    else
        if(y%100==0&&y%400!=0)
            return false;
        return true;
    
}
int main() {
    int a;
    cin>>a;
    if(yoon(a)) cout<<"true";
    else cout<<"false";
    // Please write your code here.
    return 0;
}