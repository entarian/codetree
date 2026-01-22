#include <stdio.h>
#include <string.h>
char text[1001];
char pattern[1001];
void sr(){
    int num=0;
    int a=0;
    for(int i=0;i<strlen(text);i++){
        num=0;
        for(int r=0;r<strlen(pattern);r++){
            if(text[i+r]==pattern[r]){
                num++;
            }
        }
        if(num==strlen(pattern)){
            printf("%d",i);
            break;        
        }
        
            
    }
    if(num!=strlen(pattern)){
        printf("-1");
    }
        

}
int main() {
    scanf("%s", text);
    scanf("%s", pattern);
    sr(text,pattern);
    // Please write your code here.
    
    return 0;
}