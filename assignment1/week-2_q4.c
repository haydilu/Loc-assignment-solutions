
#include<stdio.h>

int main(){
    int N, n1=0, n2=1, n3;
    printf("Enter the number here : \n");
    scanf("%d", &N);
    printf("The Fibonacci Series will be : \n%d\n", n2);
    for(int i=0; i<(N-1); i++)
    {
        n3=n1+n2;
        printf("%d\n", n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}