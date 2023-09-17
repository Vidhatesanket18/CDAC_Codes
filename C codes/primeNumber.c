
#include<stdio.h>
int main(){
    int num=0;

    printf("Enter the number to check whether it is prime or not: \n");
    scanf("%d\n",&num);
    int isPrime = 1;
   
    for(int i=2; i < num; i++){

        if(num % i==0){
            printf("Number is not prime\n");
            isPrime=0;
            break;
            
        }
    }
        if(isPrime){
            printf("Number is prime");
        }
        else{
            printf("Number is not prime");
        }
       
    
    return 0;
}