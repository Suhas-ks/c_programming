#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[80] = "hello how are you my name is jason";
    const char s[2]="-";
    char *token;

    // get the first token
    token = strtok(str, s);

    // walk through other tokens
    while (token != NULL)
    {
        printf("\n%s", token);
        // NULL is passed so that the static pointer does not change
        // the reference to the previusly passed string and so when the specified delimiter is encountered,
        // it simply uses the same reference as a starting point and increments the pointer reference till 
        // the delimiter is encountered. Now once the delimiter is encountered, it will set the pointer to the immediate reference
        // post delimiter. Once the string terminal character is encountered, it will return NULL which will be stored in 'token'
        token = strtok(NULL, s);
    }
    const char t[2]=" ";
    for (token = strtok(str, t); token != NULL; token = strtok(NULL, t)){
        printf("\n%s",token);
    }
    
    
    return 0;
}
