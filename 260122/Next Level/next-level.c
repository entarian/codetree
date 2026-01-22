#include <stdio.h>
#include <string.h>
char id[11];
int level;
struct infor{
    char ide[10];
    int lvl;
};
int main(){
    struct infor i,i1;
    
    scanf("%s %d", id, &level);
    // Please write your code here.
    strcpy(i.ide,"codetree");
    i.lvl=10;
    strcpy(i1.ide,id);
    i1.lvl=level;
    printf("user %s lv %d\n",i.ide,i.lvl);
    printf("user %s lv %d\n",i1.ide,i1.lvl);
    return 0;
}