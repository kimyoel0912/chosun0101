#include <stdio.h>
int main(void)
{
	double cm;

	printf("키를 입력하시오(cm): ");
	scanf("%lf", &cm);

	double totalInch = cm / 2.54;
	int feet = totalInch / 12;
	double inch = totalInch - (feet * 12);
	
	
	printf("%.1f는 %d피트 %.2f인치 입니다. ", cm, feet, inch);

	return 0;
}