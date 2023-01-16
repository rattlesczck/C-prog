#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a letter: ");
    scanf(" %c", &letter); 

    switch(letter)
    {
        case 'a':
         printf("letter is a vowel.\n", letter);
         break;
        case 'e': printf("letter is a vowel.\n", letter);
        break;
        case 'i':  printf("letter is a vowel.\n", letter);
        break;
        case 'o':  printf("letter is a vowel.\n", letter);
        break;
        case 'u':  printf("letter is a vowel.\n", letter);
        break;
        case 'A':  printf("letter is a vowel.\n", letter);
        break;
        case 'E':  printf("letter is a vowel.\n", letter);
        break;
        case 'I':  printf("letter is a vowel.\n", letter);
        break;
        case 'O':  printf("letter is a vowel.\n", letter);
        break;
        case 'U': printf("letter is a vowel.\n", letter);
        break;
        default:
            printf(" letter is a consonant.\n", letter);
    }

    return 0;
}
