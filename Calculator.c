#include <stdio.h>
#include <math.h>
main()
{
    int number1, number2;
    char operater;
    printf("Enter a number :");
    scanf("%d", &number1);
    printf("Enter second number :");
    scanf("%d", &number2);
    printf("Enter operator :");
    scanf("%c", &operater);
    switch(operater)
    {
        case'+':
        printf("The sum is %f", number1+number2);
        break;
        case'-':
        printf("The sum is %f", number1-number2);
        break;
        case'*':
        printf("The sum is %f", number1*number2);
        break;
        case'/':
        printf("The sum is %f", number1/number2);
        break;
    }
}

