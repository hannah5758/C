#include <stdio.h>

int main(void){
    double rad;
    double area;
    double circum;
    
    printf("What is radius? : ");
    scanf ("%lf", &rad);
    
    area = rad*rad*3.14;
    circum = 2*3.14*rad;
    
    printf("area : %lf \n", area);
    printf("circumference : %lf \n", circum);
    
    return 0;
}
