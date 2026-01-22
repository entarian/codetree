#include <stdio.h>
struct promise{
    char code[10];
    char c;
    int hour;
};
int main() {
    struct promise p;
    scanf("%s %c %d",p.code,&p.c,&p.hour);
    printf("secret code : %s\nmeeting point : %c\ntime : %d",p.code,p.c,p.hour);
    // Please write your code here.
    return 0;
}