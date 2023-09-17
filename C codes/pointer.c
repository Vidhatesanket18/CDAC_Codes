#include<stdio.h>
int main(){

    char a = 'a';
    char* b = &a;

    printf("The value of a is: %d\n",a);
    printf("The value of a by using var b is: %d\n",*b);
    printf("Addresss of a using var b is: %d\n",b);
    printf("Address of a is: %d\n",&a);
    printf("Size of variable a is: %d\n", sizeof(a));
    printf("Size of variable a using b is: %d\n ",sizeof(*b));
    printf("size of address of a using var b is : %d\n", sizeof(b));
    printf("size of address of a is: %d\n", sizeof(&a));
    
    




    return 0;
}