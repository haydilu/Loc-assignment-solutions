#include <stdio.h>
int main()
{
	int n1;
	int n2;
	printf("ENTER TWO NUMBERS:");
	scanf("%d %d",&n1,&n2);
	if (n1>n2){
		printf("THE MAXIMUM IS:%d",n1);
		
	}
	else if (n2>n1){
		printf("THE MAXIMUM IS:%d",n2);
		
	}
	else{
		printf("NONE IS MAXIMUM BOTH ARE EQUAL");
		
	}
	return 0;
		
}
