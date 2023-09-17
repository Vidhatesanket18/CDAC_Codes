#include<stdio.h>

void area(int*,int*,int*);

int main(){
    int length,breadth,area_c;
    printf("Enter the length and breadth of rectangle: \n");
    scanf("%d\n%d",&length,&breadth);
    area(&length, &breadth, &area_c);
    printf("Area of reactangle is: %d", area_c);





    
    return 0;
}
void area(int* l,int* b,int* a){

    *a = (*l) * (*b);

}