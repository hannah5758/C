#include <stdio.h>

int Alpha(char x){
    if (x<91){
        return (x - 64);
    }
    else{
        return (x - 96);
    }
}
int main(void){
    char num;
    int a;
    printf("알파벳을 입력 : \n");
    scanf("%c", &num);
    a = Alpha(num);
    printf("%d", a);
    return 0;
}

//A 65 Z 90
//a 97 z 122
