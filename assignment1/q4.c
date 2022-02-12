#include <stdio.h>
int main()
{
	float n1;
	float n2;
	printf("ENTER NUM1:");
	scanf("%f",&n1);
	printf("ENTER NUM2:");
	scanf("%f",&n2);
	switch(1)
	{	case 1:
			printf("ADDITION-->%f \n",n1+n2);
		case 2:
			printf("SUBSTRACTION-->%f \n",n1-n2);
		case 3:
			printf("MULTIPLICATION-->%f \n",n1*n2)	;
		case 4:
			printf("DIVISION-->%f \n",n1/n2);
			break;	
	}
	return 0;
}
