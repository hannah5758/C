#include <stdio.h>
    
int main(void) {
    int kor[3], eng[3], mat[3];
    int tot, toatl=0;
    int howmany, n;
    
    printf("몇 명의 성적을 처리하도록 설정하시겠습니까? : ");
    scanf("%d", &howmany);
    
    for(n=1;n<=howmany;n++){
        printf("%d 번째 학생의 점수 입력 (3과목, 스페이스로 구분)", n);
        scanf("%d %d %d", &kor[n], eng[n], mat[n]);
    }
   
    printf("----------------------");
    
    printf("\n순번 \t국어 \t영어 \t수학 \t총점 \t평균\n");
    
   
    return 0;
    
}
