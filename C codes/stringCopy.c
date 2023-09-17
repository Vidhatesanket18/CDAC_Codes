#include<stdio.h>
#include<string.h>

int main(){

    char a[5];
    char b[5];
    printf("Enter string a and b: \n");
    gets(a);
    
    strcpy(b,a);
    printf("Copied string: %s\n",b);


    return 0;
}