#include<stdio.h>
#include<string.h>
void ustrcpy(char*, char*);
int main(){

    char a[50];
    printf("Enter string: \n");
    gets(a);

    char b[50];
    ustrcpy(a,b);
    
    printf("Output string: %s",b);
    return 0;
}
void ustrcpy(char* p, char* q){
    while(*p != '\0'){
        *q = *p;
        p++;
        q++;
    }
}