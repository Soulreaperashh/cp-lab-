//wap that will read the valies of constands a,b,c,d,m.n & compute thw values of x1 &x2 an appropriate msg is printed
#include<stdio.h>
int main()
{
	int a,b,c,d,m,n,x1,x2;
	printf("print the value of constant");
	scanf("%d %d %d %d %d %d " , &a,&b,&c,&d,&m,&n);

	if(a*d-c*d !=0)
	{ printf("x1 is %d",x1= ((m*d-b*n)/(a*d-c*b)));
	  printf("x2 is %d",x2= ((n*a-m*c)/(a*d-c*b)));
	}
	
	return 0;

	}
