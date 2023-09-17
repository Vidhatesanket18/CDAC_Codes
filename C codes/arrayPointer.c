#include<stdio.h>
int main(){

    int a[5] = {1,2,3,4,5};
    int *b = a;

    for(int i=0; i < (sizeof(a)/sizeof(a[0])); i++){
        printf("Elment at position %d is: %d\n",i,*(b+i));
    }


    
    return 0;
}