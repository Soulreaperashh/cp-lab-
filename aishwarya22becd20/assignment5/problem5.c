///wap to find the sum of a digits of a given integer 
#include<stdio.h>
#include<math.h>
int main(){

	int n , m , sum=0;
	printf("enter the value");
	scanf("%d" , &n);

	while(n>0)
	{ 
		m = n % 10;
	       sum = sum+m;
       	       n = n/10;
	}
	printf("the sum of digits is %d" , sum);

	return 0;

}
