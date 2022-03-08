
#include <stdio.h>

int main()
{
    int arr[10], num, i, sumOdd=0, sumEven=0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the number : \n");
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            sumEven = sumEven + arr[i];
        }
        else{
            sumOdd = sumOdd + arr[i];
        }
    }

    printf("Sum of Odd Numbers is %d\n", sumOdd);
    printf("Sum of Even Numbers is %d\n", sumEven);
    
    return 0;
}