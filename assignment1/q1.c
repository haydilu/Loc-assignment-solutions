#include <stdio.h>
int main(){
	char name[50];
	int rn;
	char br[50];
	char hob[100];
	printf("ENTER A NAME:");
	gets(name);
	printf("ENTER YOUR BRANCH:");
	gets(br);
	printf("ENTER YOUR HOBBIES:");
	gets(hob);
	printf("ENTER REDG.no:");
    scanf("%d",rn);
	printf("NAME-->%s \n",name);
	printf("redg. no,-->%d \n",rn);
	printf("branch-->%s \n",br);
	printf("hobbies-->%s \n",hob);
	return 0;
}
