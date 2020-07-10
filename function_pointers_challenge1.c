#include<stdio.h>
void sum(float *a, float *b, float *c);
void diff(float *a, float *b, float *c);
void mul(float *a, float *b, float *c);
void div(float *a, float *b, float *c);

int main(int argc, char const *argv[])
{
    float a[] = {34, 56, 20, 69, 5, 9, 5, 6, 9};
    float b[] = {954, 86, 54, 93, 68, 98, 43, 3};
    float c[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int choice =0;
    void (*op)(float*, float*, float*);
    printf("enter the choice of operation:\n1. -> addition\n2. -> subtraction\n3. -> multiplication\n4. -> division\n");
    scanf("%d",&choice);
    printf("the array elements are as follows:\n");
    for (int m=0; m < 9; m++)
    {
        printf("%f ",a[m]);
    }
    printf("\n");
    for (int m=0; m < 9; m++)
    {
        printf("%f ",b[m]);
    }
    printf("\n");
    switch (choice)
    {
    case 1:
        op = &sum;
        (*op)(a, b, c);
        printf("the summed array is:\n");
        for (int m=0; m < 9; m++)
        {
            printf("%f ",c[m]);
        }
        printf("\n");
        break;
    case 2:
        op = &diff;
        (*op)(a, b, c);
        printf("the difference array is:\n");
        for (int m=0; m < 9; m++)
        {
            printf("%f ",c[m]);
        }
        printf("\n");
        break;
    case 3:
        op = &mul;
        (*op)(a, b, c);
        printf("the product array is:\n");
        for (int m=0; m < 9; m++)
        {
            printf("%f ",c[m]);
        }
        printf("\n");
        break;
    case 4:
        op = &div;
        (*op)(a, b, c);
        printf("the divided array is:\n");
        for (int m=0; m < 9; m++)
        {
            printf("%f ",c[m]);
        }
        printf("\n");
        break;
    default:
        printf("YOU DID NOT CHOOSE AN OPTION\n");
        break;
    }
    return 0;
}

void sum(float *a, float *b, float *c)
{
    for (int i = 0; i < 9; i++)
    {
        *c = *a + *b;
        c++;
        a++;
        b++;
    }
    
}

void diff(float *a, float *b, float *c)
{
    for (int i = 0; i < 9; i++)
    {
        *c = *a - *b;
        c++;
        a++;
        b++;
    }
    
}

void mul(float *a, float *b, float *c)
{
    for (int i = 0; i < 9; i++)
    {
        *c = *a * *b;
        c++;
        a++;
        b++;
    }
    
}

void div(float *a, float *b, float *c)
{
    for (int i = 0; i < 9; i++)
    {
        *c = *a / *b;
        c++;
        a++;
        b++;
    }
    
}