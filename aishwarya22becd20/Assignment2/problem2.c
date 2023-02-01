//calculate the simple intrest

#include<stdio.h>
#include<math.h>
int main()
{ 
	float p,r,t;
 	printf("enter principle");
	scanf("%f",&p);
	printf("enter rate of intrest");
	scanf("%f",&r);
	printf("enter time"); 
	scanf("%f",&t);

	float si=(p*r*t)/100;
	printf("the simple intrest is%f", si);
	 
	return 0;
}

