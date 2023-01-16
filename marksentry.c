#include<stdio.h>
int main ()
{
    int m1, m2, m3, avg;
    printf("Enter values of marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    avg = (m1 + m2 + m3)/3;

    if (avg >= 90)
    {
        printf("Grade = A");

    }
    else if ( avg >= 80 && avg < 90)
   {
        printf("Grade = B");

    }

    else if (avg >=70 && avg < 80) 
    {
      printf("Grade = C");
    }

   else if (avg >=60 && avg < 70)
   {
    printf("Grade = D");
   }

   else 
   {
    printf("Grade = E ( you have failed.. congrats!)");

   }

   return 0;

}

