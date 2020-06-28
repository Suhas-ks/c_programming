#include<stdio.h>
#define IS_UPPER(ch) ('A' <= ch && ch <= 'Z')
#define IS_LOWER(ch) ('a' <= ch && ch <= 'z')
#define IS_ALPHABET(ch) (IS_LOWER(ch) || IS_UPPER(ch))
#define IS_VOWEL_LOWER(ch) (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
#define IS_VOWEL_UPPER(ch) (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
#define IS_VOWEL(ch) (IS_VOWEL_LOWER(ch) || IS_VOWEL_UPPER(ch))
#define IS_DIGIT(ch) (ch>='0' && ch<='9')
#define IS_ALPHANUMERIC(ch) (IS_ALPHABET(ch) || IS_DIGIT(ch))


int main(int argc, char const *argv[])
{
    char ch;
    printf("enter a character:\n");
    scanf("%c", &ch);
    if IS_UPPER(ch)
    {
        printf("the character is upper case\n");
    }    
    else if IS_LOWER(ch)
    {
        printf("the character is lower case\n");
    }
    else
    {
        printf("the character is not an alphabet\n");
    }
    
    return 0;
}

