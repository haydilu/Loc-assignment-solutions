
#include<stdio.h>
#include<strings.h>

int main(){
    char str1[40];
    char str2[40];
    printf("Enter string one : \n");
    gets(str1);
    
    printf("\nEnter string two : \n");
    gets(str2);
    
    // strcat(str1,str2);

    printf("\n%s", strrev(strcat(str1,str2)));

    return 0;
}