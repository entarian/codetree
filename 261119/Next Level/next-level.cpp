#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;
class user{
    public:
        string id;
        int level;
        user(string id="codetree",int level=10){
            this->id=id;
            this->level=level;
        }
        
};
int main() {
    cin >> user2_id >> user2_level;
    user user1=user();
    user user2=user();
    user2.id=user2_id;
    user2.level=user2_level;
    cout<<"user "<<user1.id<<" lv "<<user1.level<<endl;
    cout<<"user "<<user2.id<<" lv "<<user2.level<<endl;
    // Please write your code here.

    return 0;
}