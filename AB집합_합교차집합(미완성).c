#include <stdio.h>
    
int main(void) {
    int a[5], b[5];
    int i;
    int sum_arr[10];
    
    printf("A 집합의 원소 5개 입력 : \n");
    for (i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    
    printf("B 집합의 원소 5개 입력 : \n");
    for (i=0;i<5;i++){
        scanf("%d", &b[i]);
    }
    
    //합집합
    //합집합 a b 중복되는건 하나만
    for (int i=0; i < 5; i++){
        sum_arr[i] = a[i];
        sum_arr[i+5] = b[i];
    }
    
    for (int i=0; i < 10; i++){
        printf("%d", sum_arr[i]);
    }
    
    for (int i = 0; i < 5; i++){
        int same_count = 0;
        for (int j = 0; j < 5 ; j++){
            if (a[i] == b[j]){
                printf("%d", a[i]);
                same_count = same_count + 1;
            }
        }
        if (same_count == 0){
            printf("%d", a[i]);
        }
    }
    printf("A와 B의 합집합 : \n");

    return 0;
    
}
