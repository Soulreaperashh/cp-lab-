// WAP to compute 1+2+3+4....+n

	#include<stdio.h>
	int main()
{
		int num ,i=1, sum= 0;
		printf("enter the value");
		scanf("%d", &num);
 		
		while(i<=num)
			{
			sum = sum + i;
			i++;

			}
		printf("the sum is %d\n", sum);

		return 0;
}
