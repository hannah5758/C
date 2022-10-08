#include<stdio.h>

int main(void) {
	int width;
	int height;

	printf("width : ");
	scanf_s("%d", &width);

	printf("height : ");
	scanf_s("%d", &height);

	printf("직사각형의 넓이는 %d입니다. \n", width * height);



	return 0;
}