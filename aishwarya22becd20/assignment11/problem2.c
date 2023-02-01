// write a program to make upper trianglar values of zero	

#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
 int main()
    {
	int matrix[MAXROW][MAXCOL]; 
        int i, j, r, c;
        printf("enrter the number of rows");
	scanf("%d", &r);
	printf("enter number of cols");
	scanf("%d",&c);

	for (i=0;i<r;j++)
	{
		for (i=0;j<c;j++)
 		{
			if (i>j)
				matrix[i][j]=69;
			else 
				matrix[i][j]=0;
		}
	}
	printf("\n matrix is :\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}


     
