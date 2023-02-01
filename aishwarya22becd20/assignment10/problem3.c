//wap  to find compund interest using function 
#include<stdio.h>
#include<math.h>
	float compint(float p, float r, float t){
	float ci;
	ci = p*(pow((1+ r/100),t));
	return ci;
}

	int main (){
		float p,ti,c,r,CI;
			printf("enter the p,r,ti respectively: \n");
			scanf ("%f %f %f" ,&p,&r,&ti );
			CI = compint(p,r,ti);

			printf("compund interest = %f",CI);
			return 0;
	}

