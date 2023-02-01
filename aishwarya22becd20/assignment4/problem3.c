//wap yo compute the real roots 
#include<stdio.h>
#include<math.h>
int main()
{
		int a,b,c;
			printf("enter the values of a,b,c:\n");
			scanf("%d %d %d" ,&a, &b ,&c);
		
		if(a==0 & b==0)
			printf("there is no solution");
		
		else if(a==0)
			
			printf("there is only one solution \n");

		else 
			printf("the real roots of the equation are %f &nd %f. \n" , ((-b)-sqrt(b*b-4*a*c)/2*a), ((-b)-sqrt(b*b-4*a*c)/2*a));

		return 0;

}

