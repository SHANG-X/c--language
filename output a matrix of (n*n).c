#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Fx(int n);//重新定义一个用来打印矩阵的函数
int main()
{
	int n;
	srand((unsigned)time(NULL));
	n = rand()%14+7;
		printf("%d\n", n);
	Fx(n);
}
void Fx(int n)
{

		int i = 0;
		int j = 0;
		for (i = 1; i <=n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				printf("%d\t",j*i);//水平指表
			}
			printf("\n");
		}
		return 0;
	}
