#include<stdio.h>
void area(int, float*);
const float pi= 3.142;
int main(){

    int radius;
    float area_c;
    printf("Enter radius: ");
    scanf("%d",&radius);

    area(radius, &area_c);

    printf("Area of circle is: %f", area_c);


    
    return 0;
}
void area(int r, float* a){
    *a = pi * r *r;
}