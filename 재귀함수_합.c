int result = 0;

void sum(int x){
    result = result + x;
    x = x - 1;
    if (x == 0){
        return;
    }
    else{
        return sum(x);
    }
}

int main(void){
    int num;
    printf("input number : ");
    scanf("%d", &num);
    
    sum(num);
    
    printf("%d\n", result);
}
