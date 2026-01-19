#include <stdio.h>

int main() {
    // Ple
    int a;
    while(a!=25){
        scanf("%d",&a);
        if(a<25){
            printf("Higher\n");
        }
        else if(a>25){
            printf("Lower\n");
        }
    }
    printf("Good");
    return 0;
}