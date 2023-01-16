#include<stdio.h>
int main()
{
    char clr;
    printf("Enter any character to depict a color = ");
    scanf("\n%c", &clr);
    
    switch (clr)
    {
        case 'r' : printf("Color is RED");
        break;

        case 'g': printf("Color is GREEN");
        break;

        default : printf("Invalid character entered!");

    }

    return 0;


}