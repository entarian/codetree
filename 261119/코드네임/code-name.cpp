#include <iostream>
#include <algorithm>

#define MAX_N 5

using namespace std;

class User {
public:
    char code_name;
    int score;
    User(){}
    User(char code_name,int score){
        this->code_name=code_name;
        this->score=score;
    }

};

User users[MAX_N];

int main() {
    int n=100;
    int k;
    for (int i = 0; i < MAX_N; i++) {
        cin >> users[i].code_name >> users[i].score;
        if(n!=min(n,users[i].score)) {
            n=min(n,users[i].score);
            k=i;
        }
    }
    cout<<users[k].code_name<<" "<<users[k].score;
    // Please write your code here.

    return 0;
}
