// create a structure of type employee with 3 members, name (character array), hireDate (int), salary (float).
// create an instance of type employee and initialize data. Also create a second instance and read in from the console.
// print out contents of the two employees
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
    char *name;
    int hireDate;
    float salary;
};

int main(int argc, char const *argv[])
{
    struct employee one;
    one.name = (char *) malloc(25 * sizeof(char));
    printf("enter the name for employee 1:\n");
    fgets(one.name, 25, stdin);
    one.hireDate = 11202134;
    one.salary= 569912498424;
    struct employee two;
    printf("enter the name of employee 2:\n");
    two.name = (char *) malloc(sizeof(one.name));
    fgets(two.name, 25, stdin);
    printf("\nenter the join date and salary:\n");
    scanf("%d",&two.hireDate);
    scanf("%f",&two.salary);
    printf("\n\n*******EMPLOYEE 1 DETAILS*********\n\n");
    printf("NAME: %s\nHIRE DATE: %d\nSALARY: %f",one.name, one.hireDate, one.salary);
    printf("\n\n*******EMPLOYEE 2 DETAILS*********\n\n");
    printf("NAME: %s\nHIRE DATE: %d\nSALARY: %f\n",two.name, two.hireDate, two.salary);
    free(one.name);
    one.name=NULL;
    free(two.name);
    two.name=NULL;
    return 0;
}
