#include <stdio.h>
void plus(int a, char o, int c){
    printf("%d %c %d = %d",a,o,c,a+c);
}
void minus(int a, char o, int c){
    printf("%d %c %d = %d",a,o,c,a-c);
}
void divide(int a, char o, int c){
    printf("%d %c %d = %d",a,o,c,a/c);
}
void multi(int a, char o, int c){
    printf("%d %c %d = %d",a,o,c,a*c);
}
void four(int a, char o, int c){
    if(o=='+'){
        plus(a,o,c);
    }
    else if(o=='-'){
        minus(a,o,c);
    }
    else if(o=='/'){
        divide(a,o,c);
    }
    else if(o=='*'){
        multi(a,o,c);
    }
    else{
        printf("False");
    }
}
int main() {
    int a, c;
    char o;
    
    scanf("%d %c %d", &a, &o, &c);
    four(a,o,c);
    // Please write your code here.
    
    return 0;
}