// wap to check the given number is armstong's number or not 
#include<stdio.h>
#include<math.h>
	 
	int main(){
	int num , r, sum=0,temp;
	printf("enter the numbe");
		scanf("%d", &num);

		for(temp=num ; num!=0 ;num = num/10){
			r = num%10;

		  	sum =sum+(r*r*r);}
		if(sum == temp)
			printf("an armsrong");

		else 
			printf("not an armstrong number");
	
		return 0;

}
