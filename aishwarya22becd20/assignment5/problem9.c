//wap find prime number within range 
#include<stdio.h>
#include<math.h>
int main(){
	int num ,i  , c ,d ;
	printf("enter a number");
	scanf("%d" , &c);

	printf("enter the end number");
	scanf("%d" ,&num);
	printf("the number between them are  %d and %d " ,c,num);

	while (c<num)
	{	d = 0;
		for(i=2 ; i<c/2;++i)
		{
			if(c%i==0)
			{
				d=i;
				break;
			}
		}
		if(c==0)
			printf("%d ", c);
		++c;

	
	}
	
	return 0;

}

