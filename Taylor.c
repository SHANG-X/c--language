#include<stdio.h>
void main()
{
	double s = 1.0, e = 1.0; int i = 1.0;
	while (1 / s > 1e-6)
	{
		s = i * s;
		e = e + 1 / s;
		i++;
	}
	printf("e=%f\n", e);
}
//用泰勒级数公式求e的近似值
