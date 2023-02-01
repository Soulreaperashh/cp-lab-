//waP TO FIND THE ODD NO, EVEN NO, POSITIVE NO, NEGATIVE NO PRESENT IN AN ARRAY
#include<stdio.h>
	int main()
{
	int a[8],i;
	printf("enter the elements :\n");
	for (i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<8;i++){
		if(a[i]%2 ==0)
				printf("\n[%d] is even", i);
		else 
			printf("\n[%d] is odd",i);
		
		if (a[i]<0)
			printf("\n[%d] is negative",i);
		else 
			printf("\n[%d} is positive",i);
	}

	return 0;
}



