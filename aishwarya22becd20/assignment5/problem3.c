//wap to compute series of 1+7+7^2+7^3....nth term
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i=1,sum=0;
	printf("enter the value");
	scanf("%d",&num);
	while(i<=num)
	{
		sum = sum +pow(7,i);
		i++;
	}
	printf("the sum is %d", sum);

	return 0;
}
