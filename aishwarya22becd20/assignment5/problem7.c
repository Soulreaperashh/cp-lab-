// wap a test wheater the number is prime no. or not

#include<stdio.h>
#include<math.h>
  int main()
{
	int num,i=1,c=0;
	printf("enter the number");
	scanf("%d" ,&num);
		
	while(i<=num)
	{
		if (num%10==0)
			c++;
			i++;
	}
	if (c==2)
		printf("the nhumber is not prime");
	else 
		printf("number is prime");
	return 0;

}

