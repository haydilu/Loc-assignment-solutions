#include <stdio.h>
int main()
{
	int a;
	int k;
	printf("ENTER THE NUMBER:");
	scanf("%d",&a);
	k=a%2;
	switch(k){
		case 0:
			printf("EVEN");
			break;
		case 1:
			printf("ODD");
			break;
	}
	return 0;	
	
}
