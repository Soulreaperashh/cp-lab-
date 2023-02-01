//Write a program to find the volume of sphere
#include<stdio.h>
	int main()
{	float r;
		printf("enter the radius of the sphere ; ");
		scanf("%f" ,&r);

		float volume=(4/3)*3.14*(r*r*r);
		printf("volume is %f" ,volume);
		return 0;


}
