//wap to find the minimum , maximum and average of an array 
#include<stdio.h>
int main()
{
	int a[8],i,l,g,s=0;
	float avg;
	printf("enteer the number:\n");
	for(i=0;i<8;i++)
{
	scanf("%d",&a[i]);
	s=s+ a[i];
	avg=s/8.0;
}

	printf("avgerage is %.2f\n", avg);
	g=a[0];
	for(i=0;i<8;i++)
	 if (a[i]>g)

	printf("greatest no is %d\n",g);
	l=a[0];
	for (i=0;i<8;i++)
	 if (a[i]<l)

	  l=a[i];

	 printf("lowest no is %d\n",i);

	 return 0;
}
