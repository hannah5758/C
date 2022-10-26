#include <stdio.h>
    
int main(void) {
    int arr[5][5];
    int num = 0;
    for (int i = 0; i < 5; i++){
        //printf("%d \n", num);
        int temp = i + 1;
        if(temp % 2 == 0)
        {
            //printf("111111\n");
            for(int j = 4; j <= 0 ; j--){
                num = num + 1;
                printf("%d \n", num);
                arr[i][j] = num;
            }
        }
        
        else
        {
            //printf("2222\n");
            for(int j = 0; j < 5 ; j++){
                num = num + 1;
                arr[i][j] = num;
            }
        }
    }
    
    for (int i = 0; i<5 ; i++){
        for (int j = 0; j<5; j++){
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}
