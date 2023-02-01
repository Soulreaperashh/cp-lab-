//write a program to create an identity matrix diagonals are 1 off diagonals are zero take the size of the matrix from user
#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
int main() {
	

    int matrix[MAXROW][MAXCOL];
    int i,j,r,c,id;

     
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);

    	for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            if(i==j)
	    {
		    matrix[i][i]=1;
	    }
	    else{
		    matrix[i][j]=0;
	    }
	}
    }
 
    printf("\n Matrix is :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("%d\t",matrix[i][j]);

    	}
	printf("\n");
    }
    return 0;   


	
}
