

#include<stdio.h>
void uconcat(char*, char*);
int main(){
    char a[50];
    char b[20];
    printf("Enter the strings: ");
    scanf("%s",a);
    scanf("%s",b);
    printf("%s and %s\n",&a[0],&b[0]);
    uconcat(a,b);
    
    printf("Output string: %s",a);
    
    
}
void uconcat(char* p, char* q){
    while(*p != '\0'){
        p++;
    }
    while(*q != '\0'){
        *p = *q;
        p++;
        q++;
        
    }
    *p= '\0';
}