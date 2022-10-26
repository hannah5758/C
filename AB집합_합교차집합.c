#include <stdio.h>
    
int main(void) {
    int a[5], b[5];
    int i;
    
    printf("A 집합의 원소 5개 입력 : \n");
    for (i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    
    printf("B 집합의 원소 5개 입력 : \n");
    for (i=0;i<5;i++){
        scanf("%d", &b[i]);
    }
    
    //합집합
    printf("A와 B의 합집합 : \n");

    return 0;
    
}
