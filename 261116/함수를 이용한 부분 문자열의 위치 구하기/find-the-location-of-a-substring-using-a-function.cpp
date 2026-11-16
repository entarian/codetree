#include <iostream>
#include <string>
using namespace std;
string a;
string b;
void ds(){
    int c=a.length()-b.length();
    int d=0;
    int g;
    for (int i = 0; i <= c; i++) {
        bool matched = true; // 이번 위치에서 모두 일치한다고 가정

        for (int r = 0; r < b.length(); r++) {
            // 2. 한 글자라도 다르면 실패 처리 후 안쪽 루프 즉시 탈출
            if (a[i + r] != b[r]) {
                matched = false;
                break;
            }
        }

        // 3. 모두 일치했다면 첫 번째 발견 위치를 출력하고 함수 즉시 종료
        if (matched) {
            cout << i;
            return;
        }
        
    }
    cout<<-1;
    
}

int main() {
    cin>>a;
    cin>>b;
    ds();
    // Please write your code here.
    return 0;
}