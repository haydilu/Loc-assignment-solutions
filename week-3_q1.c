#include<stdio.h>
int gcd(int x, int y){
    if(x==0 || x==y)
        return x;
    else if(y==0)
        return y;
    else if(x>y)
        return gcd(x-y, y);
    return gcd(x, y-x);
}
int main(){
    int num1, num2;
    printf("Enter two numbers : \n");
    scanf("%d %d", &num1, &num2);
    printf("The GCD of the %d & %d is : %d", num1, num2, gcd(num1, num2));
    return 0;
}