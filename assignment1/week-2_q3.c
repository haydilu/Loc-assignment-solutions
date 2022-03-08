
#include <stdio.h>
#include<math.h>

int main()
{
    int num, firstDigit, lastDigit, newNum, digit;
    printf("Enter the number here : \n");
    scanf("%d", &num);
    lastDigit = num%10;
    digit = (int)log10(num);
    firstDigit = (int)(num/pow(10, digit));

    newNum = lastDigit;
    newNum *= (int) round(pow(10, digit));
    newNum += num % (int) round(pow(10, digit));
    newNum -= lastDigit;
    newNum += firstDigit;
    printf("The required number after swapping is : \n%d", newNum);
    return 0;
}