// wap to check wheather the triangle is vaild or not and clarify the triangle

	#include<stdio.h>
	int main(){
		int a,b,c;
	printf("the sides of triangle are");
	scanf("%d %d %d" ,&a,&b,&c);

        if(a==b && b==c)
		printf("the given traingle is equilateral");
        
	if(a==b && b!=c);
		printf("the given triangle is isocelus triangle");
	 if(a!=b && b!=c);
		printf("the given triangle is scalar");

	else
	       	printf("the given triangle is not valid");

	return 0 ;
	}

