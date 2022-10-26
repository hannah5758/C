#include <stdio.h>
    
int main(void) {
    int kor[3], eng[3], mat[3];
    int total[3];
    double avg[3];
    int howmany, n;
    
    printf("몇 명의 성적을 처리하도록 설정하시겠습니까? : ");
    scanf("%d", &howmany);
    
    for(n=0;n<howmany;n++){
        printf("%d 번째 학생의 점수 입력 (3과목, 스페이스로 구분)", n+1);
        scanf("%d %d %d", &kor[n], &eng[n], &mat[n]);
    }
    
    for(n=0; n<howmany; n++){
        total[n] = kor[n] + eng[n] + mat[n];
        avg[n] = total[n] / 3.0;
    }
   
    printf("----------------------");
    for (n=0; n<howmany; n++){
        printf("\n순번 \t국어 \t영어 \t수학 \t총점 \t평균\n");
        printf("%d \t %d \t %d \t %d \t %d \t %lf \n", n+1, kor[n], eng[n], mat[n], total[n], avg[n]);
    }
    
   
    return 0;
    
}
