#include<stdio.h>

int main(void) {
	int width;
	int height;

	printf("width : ");
	scanf_s("%d", &width);

	printf("height : ");
	scanf_s("%d", &height);

	printf("���簢���� ���̴� %d�Դϴ�. \n", width * height);



	return 0;
}