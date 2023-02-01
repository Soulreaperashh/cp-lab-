//find the electicity bill
         #include<stdio.h>
	#include<math.h> 
	int main ()
		
		float prevb111,units,x,y,z;
		printf("enter previous month bill (if not enter0)");
		scanf("%f", &prevb111);
		printf("no of units this month");
		scanf("%f" &units);
		if(units>=100){
			x=(units- (units-100))*1.40;
			y=(units-100)-(units-100)*2.50;
		        z=(units-200) *3.20;
		
		}
		

		else if(units<100)
	              printf("your bil is %.2f" , units*1.40+ prvebill);
		
		      return 0;

		      }
