#include <iostream>
#include <string>

using namespace std;
class spy{
    public:
        string secret_code;
        char meeting_point;
        int time;
        spy(string secret_code,char meeting_point,int time){
            this->secret_code=secret_code;
            this->meeting_point=meeting_point;
            this->time=time;
        }
};
int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;
    spy spy1=spy(secret_code,meeting_point,time);
    cout<<"secret code : "<<spy1.secret_code<<endl;
    cout<<"meeting point : "<<spy1.meeting_point<<endl;
    cout<<"time : "<<spy1.time<<endl;

    // Please write your code here.

    return 0;
}