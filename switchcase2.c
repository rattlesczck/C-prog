#include<stdio.h>
int main ()
{
    int a, b;
    char op;
    printf("Enter values of a and b, and an operator");
    scanf("%d %d %c", &a, &b, &op);
    

    switch (op)
    {
    case '+': printf("%d", a+b);
        break;
    
    case '-' : printf("%d", a-b);
     break;


    case '*' : printf("%d", a*b);
     break;

    case '/' : printf("%d", a/b);
     break;

     default: printf("You had one job!! ");
            break;
    }    
    
    
    
}