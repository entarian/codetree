#include <stdio.h>

int y, m, d;
void theday(int y,int m,int d){
    int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                month[2]=29;
            }
            month[2]=28;
        }
        else{
            month[2]=29;
        }
        
    }
    if(d>=1&&d<=month[m]){
        if(2<m&&m<6){
            printf("Spring");
        }
        else if(5<m&&m<9){
            printf("Summer");
        }
        else if(8<m&&m<12){
            printf("Fall");
        }
        else{
            printf("Winter");
        }
    }
    else{
        printf("-1");
    }
    
}
int main(void) {
    scanf("%d %d %d", &y, &m, &d);
    theday(y,m,d);
    // Please write your code here.
    
    return 0;
}