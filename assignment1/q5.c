#include <stdio.h>
#define pie 3.14
int main()
{
	float rad;
	printf("ENTER THE RADIUS:");
	scanf("%f",&rad);
	printf("diameter-->%f \n",rad*2);
	printf("circumference-->%f \n",2*pie*rad);
	printf("area-->%f \n",pie*rad*rad);
	return 0;
}
