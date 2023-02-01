//wap  to round up a given floatinng integer by considering the floor and celling operaion
	
	#include<stdio.h>
	int main(){
		float a;
		printf("enter a floating number");
		scanf("%f" , &a);
		
		int c =++a;
		
		printf("the celling value is %d" ,c);
		
		return 0;
		}

