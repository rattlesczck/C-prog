#include<stdio.h>
int main()
{
    float s1, s2, s3;
    printf("Enter values of sides ");
    scanf("%f %f %f", &s1, &s2, &s3);

    if (s1 == s3 && s2 == s3)
    {
        printf("The given triangle is equilateral");

 
    }
    else if( s1 != s2 && s3 != s3)
    {
        printf("Given triangle is scalene!");

    }
    else 
    {
        printf("The given triangle is isosceles. ");

    }


   return 0;
   





}   