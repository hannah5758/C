#include <stdio.h>

int main(void) {
    int line, i, j;
    
    printf("라인 수를 입력하시오 >> ");
    scanf("%d", &line);
    
    
    for (i=1; i<=line; i++){
        for (j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
