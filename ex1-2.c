#include<stdio.h>

void int_num(int n)
{
	for (int i = 7; i >= 0; i--)
	{
		printf("%d", (n >>i) & 1); //n을 i만큼 오른쪽으로 이동 후 마지막 비트를 추출
	}
}

void dec_num(double n)
{
	for (int i = 0; i < 8; i++)
	{
		n = n * 2; //2를 곱해서 소수부분을 2진수로 변환

		if (n >= 1) //2를 곱한 값이 1이상일 경우 1을 출력
		{
			printf("1");
			n = n - 1;
		}
		else
		{
			printf("0"); //아닌 경우에는 0출력
		}
	}
}

int main()
{
	double num = 0.0;

	printf("intput: "); 
	scanf("%lf", &num);
	int_num(num);
	printf(".");
	num = num - (int)num;
	if (num < 0) num = -num; 
	dec_num(num);

	return 0;
}