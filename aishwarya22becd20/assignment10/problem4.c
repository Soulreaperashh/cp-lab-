//wap to find power of ano. for both +ve &-ve powers
#include<stdio.h>
#include<math.h>
int main()
{
  int num1, num2;

  printf("Enter base and power: ");
  scanf("%d %d",&num1, &num2);

  printf("Result = %.2f",pow(num1, num2));

  return 0;
}
