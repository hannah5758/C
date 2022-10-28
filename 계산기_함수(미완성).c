#include <stdio.h>

int plus(int x){
    int num2, result;
    printf("얼마를 더하겠습니까?: ");
    scanf("%d", &num2);
    
    result = x + num2;
    
    printf("result: %d \n", result);
    
    return result;
}

int minus(int x){
    int num2, result;
    printf("얼마를 빼겠습니까?: ");
    scanf("%d", &num2);
    
    result = x - num2;
    
    printf("result: %d \n", result);
    
    return result;
}

int multiple(int x){
    int num2, result;
    printf("얼마를 곱하겠습니까?: ");
    scanf("%d", &num2);
    
    result = x*num2;
    
    printf("result: %d \n", result);
    
    return result;
}

int divide(int x){
    int num2, result;
    printf("얼마로 나누겠습니까?: ");
    scanf("%d", &num2);
    
    result = x / num2;
    
    printf("result: %d \n", result);
    
    return result;
}

int exponent(int x){
    int num2, result;
    printf("몇 제곱을 하시겠습니까?: ");
    scanf("%d", &num2);
    
    for (num2;num2==0;num2--){
        result = x;
    }
    
    printf("result: %d \n", result);
    
    return result;
}

int main(void){
    int num;
    char cal;
    
    printf("계산기입니다.\n");
    printf("가능한 연산은 다음과 같습니다.\n");
    printf("+(plus) -(minus) *(multiple) /(divide) ^(exponent)\n");
    printf("연산을 취소하려면 연산에서 c를 입력하세요.\n");
    printf("새 연산을 시작하려면 n 를 입력하세요\n");
    
    printf("\n");
    
    printf("수를 입력해 주세요. ");
    scanf("%d", &num);
    
    while(1){
        printf("수행할 연산은 무엇입니까? ");
        scanf("%c", &cal);
        
        if (cal == '+') {
            plus(num);
        }
        
        else if (cal == '-'){
            minus(num);
        }
        
        else if (cal == '*'){
            multiple(num);
        }
        
        else if (cal == '/'){
            divide(num);
        }
        
        else if (cal == '^'){
            exponent(num);
        }
        
        else if (cal == 'c'){
            break;
        }
    }
    return 0;
}

