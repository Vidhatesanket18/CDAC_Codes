#include<stdio.h>
void swap(int*,int*);
int main(){
	int a=10,b=20;
	swap(&a,&b);
	
	printf("address of a: %d", &a);
	return 0;
}
void swap(int *p,int* q){
	

	printf("Value of *p : %d\n",*p);
	printf("Value of *q : %d\n",*q);
	printf("Address of *p : %d\n",p);

}
