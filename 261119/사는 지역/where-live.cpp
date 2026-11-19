#include <iostream>
#include <string>
using namespace std;
class id{
    public:
        string name,code,city;
        id(){}
        id(string name,string code,string city){
            this->name=name;
            this->code=code;
            this->city=city;
        }
};
int main() {
    int n;
    cin>>n;
    id idlist[n];
    for(int i=0;i<n;i++){
        cin>>idlist[i].name>>idlist[i].code>>idlist[i].city;
    }
    string a=idlist[0].name;
    int k=0;
    for(int i=0;i<n;i++){
        if(a>idlist[i].name)continue;
        else {
            a=idlist[i].name;
            k=i;
        }
    }
    cout<<"name "<<idlist[k].name<<endl;
    cout<<"addr "<<idlist[k].code<<endl;
    cout<<"city "<<idlist[k].city<<endl;
    // Please write your code here.
    return 0;
}