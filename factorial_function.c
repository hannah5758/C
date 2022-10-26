#include <stdio.h>
int fac2(int x){
    int fac = 1;
    for (int i = 0; i < x ; i++){
        fac = fac * (i+1);
    }
    
    return fac;
}
int main (void){
    int num;
    printf("Please enter the number : ");
    scanf("%d", &num);
    
    printf("%d! = ", num);
    printf("%d \n", fac2(num));
    
    return 0;
}
