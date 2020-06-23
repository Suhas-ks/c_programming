// write a program that creates an integer variable with a hard coded value; assign that variable's address to a pointer
// display the value of pointer, address of the pointer and the value of what the pointer is pointing to
// pointer is such a terrific concept in C; it shows the true potential of what a programmer can achieve

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int *pnum = NULL;
    int num = 5;
    pnum = &num;
    printf("===========================pointer stats=============================\n");
    printf("pointer value: %p\npointed value: %d\npointer address: %p\n",pnum, *pnum, &pnum);
    printf("===========================variable stats=============================\n");
    printf("variable address: %p\nvariable value: %d\n",&num, num);
    return 0;
}
