#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class datelist{
    public:
        string date,day,we;
        datelist(){}
        datelist(string date,string day,string we){
            this->date=date;
            this->day=day;
            this->we=we;
        }
};
int main() {
    int n;
    cin>>n;
    datelist datelist1[n];
    for(int i=0;i<n;i++){
        cin>>datelist1[i].date>>datelist1[i].day>>datelist1[i].we;
    }
    string com="2100-12-31";
    string weather="Rain";
    int a;
    for(int i=0;i<n;i++){
        if(datelist1[i].we==weather){
            if(com>datelist1[i].date) {
                com=datelist1[i].date;
                a=i;}
        }
    }
    cout<<datelist1[a].date<<" "<<datelist1[a].day<<" "<<datelist1[a].we;
    // Please write your code here.
    return 0;
}