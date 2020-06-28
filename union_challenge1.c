#include<stdio.h>

union student
{
    char grade;
    int rounded_grade;
    float exact_grade;
};

int main(int argc, char const *argv[])
{
    union student record1, record2;

    // assigning values to record1 members together...
    record1.grade = 'A';
    record1.rounded_grade = 87;
    record1.exact_grade = 86.5;

    printf("=================RECORD 1 grades=================\n");
    printf("the letter grade for record1 is %c\n", record1.grade);
    printf("the rounded grade for record1 is %d\n", record1.rounded_grade);
    printf("the exact grade for record1 is %f\n", record1.exact_grade);

    // aasigning values to record2 members one at a time...
    printf("\n=================RECORD 2 grades=================\n");
    record2.grade = 'A';
    printf("the letter grade for record2 is %c\n", record2.grade);

    record2.rounded_grade = 100;
    printf("the rounded grade for record2 is %d\n", record2.rounded_grade);

    record2.exact_grade = 99.5;
    printf("the exact grade for record2 is %f\n", record2.exact_grade);
    

    return 0;
}
