//find the compund intrest 
#include<stdio.h>
#include<math.h>
int main() 
{
	float p,r,t,n,fv,ci;
	printf("enter the principle amnt :");
	scanf("%f",&p);

	printf("enter the rate of intrest :");
	scanf("%f",&r);

	printf("enter the time period :");
	scanf("%f",&t);
	 
	printf("enter the number of times youy are getting per year interest");
	scanf("%f",&n);

	ci = (1+(r/n));

	//pow = n*t;

	fv=p*pow(ci,(n*t));

	printf("the compond intrest is %f" , fv);
	
	return 0;
}


