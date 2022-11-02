#include <stdio.h>

int main(){
    int a = 100;
    int b = 200;
    
    int* ip_a = NULL;
    int* ip_b = NULL;
    
    ip_a = &a;
    ip_b = &b;
    
    
    printf("%d %d \n", a, b);
    
    a = *ip_b;
    b = *ip_a;
 
    
    printf("After a change.. \n");
    
    printf("%d %d \n", a, b);
    return 0;
}
