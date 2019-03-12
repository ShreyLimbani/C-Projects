#include<stdio.h>
#include<math.h>
void main()
{
    //Quadratic Equation => ax/\2 + bx + c = 0
    float A,B,C,Discriminant_square,B_square;
    float Discriminant, ans1, ans2;
    printf("\t\t\t\t\t SOLUTION OF A QUADRATIC EQUATION\n");
    printf("Enter a:");
    scanf("%f", &A);
    printf("\n");
    printf("Enter b:");
    scanf("%f", &B);
    printf("\n");
    printf("Enter c:");
    scanf("%f", &C);
    printf("\n");
    B_square = pow(B,2);
    Discriminant_square = B_square - (4*A*C);
    Discriminant = pow(Discriminant_square,0.5);
    ans1 = (-B+Discriminant)/(2*A);
    ans2 = (-B-Discriminant)/(2*A);
    printf("The solution of the quadratic equation is %f and %f .",ans1, ans2 );
    printf("\n");
}
