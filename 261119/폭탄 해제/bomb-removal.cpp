#include <iostream>
#include <string>
using namespace std;
class bomb{
    public:
        string code;
        char color;
        int second;
        bomb(string code,char color,int second){
            this->code=code;
            this->color=color;
            this->second=second;
        }
};
int main() {
    string code;
    char color;
    int second;
    cin>>code>>color>>second;
    bomb bomb1=bomb(code,color,second);
    cout<<"code : "<<bomb1.code<<endl<<"color : "<<bomb1.color<<endl<<"second : "<<bomb1.second<<endl;
    // Please write your code here.
    return 0;
}