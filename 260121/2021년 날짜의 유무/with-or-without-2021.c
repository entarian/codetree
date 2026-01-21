#include <stdio.h>
void cal(int m,int d){
    int monthday[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(m<1||m>12){
        printf("No");
        return;
    }
    if(0<d&&d<monthday[m]){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    cal(m,d);
    // Please write your code here.
    return 0;
}