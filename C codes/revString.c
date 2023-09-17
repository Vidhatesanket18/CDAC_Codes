#include<stdio.h>
#include<string.h>
int main(){

    char a[10];
    printf("Enter String: \n");
    scanf("%s",a);


    char rev[10];
    int y=0;
    int len = strlen(a)-1;
    
    while(len>=0){
        rev[y] = a[len];
        len--;
        y++;
    }
    rev[y]='\0';
    printf("output is: %s", rev);
    
    return 0;
}