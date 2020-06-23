//1. function to find length of a string
//2. function to concatenate two strings
//3. function to compare two strings if they are equal return true else false



#include<stdio.h>
// #include<string.h>
int str_len(char arr[]);
void str_cat(char a[], char b[]);
_Bool str_cmp(char a[], char b[]);

int main()
{
    char a[] = "hello how are you, ";
    char b[] = "good to see you";
    printf("length of a is %d\n", str_len(a));
    // printf("length of a is %ld\n", strlen(a));
    str_cat(a, b);
    printf("the strings are %s\n",str_cmp("add","add")?"equal":"not equal");
    return 0;
}


int str_len(char arr[])
{
int count=0, i=0;
while (arr[i]!='\0'){
    count++;
    i++;
}
return count;
}

void str_cat(char a[], char b[])
{   int i=0;
    int len_a = str_len(a);
    int len_b = str_len(b);
    int total_length = len_a + len_b;
    char cat[total_length];
    
    while (a[i]!='\0')
    {
        cat[i]=a[i];
        i++;
    }
    i = 0;
    while (b[i]!='\0')
    {
        cat[len_a + i]=b[i];
        i++;
    }
    cat[total_length]='\0';
    printf("concatenated string is:\n%s", cat);
    printf("\n");

}


_Bool str_cmp(char a[], char b[])
{   
    int i=0;
    int len_a = str_len(a);
    int len_b = str_len(b);
    while ((a[i]!='\0' && b[i]!='\0') && len_a==len_b){
        if (a[i]!=b[i])
        {
            return 0;
        }
            ++i;
        }
    return 1;
}

