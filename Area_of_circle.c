// calculate the area of circle
#include<stdio.h>

void main(){
    const float pi = 3.14;
    float rad,area;
    float *p_rad, *p_area;
    p_rad = &rad;
    p_area = &area;
    printf("\nEnter the radius of circle : ");
    scanf("%f",p_rad);
    *p_area = pi * *p_rad * *p_rad;
    printf("\nArea of circle is %.2f",area);  // OR *p_area
}