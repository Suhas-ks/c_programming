#include<stdio.h>
struct packed_bits{
    unsigned int :3;
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
};

int main(int argc, char const *argv[])
{
    struct packed_bits data;
    // int bit;
    // printf("enter a number to set the number: \n");
    // scanf("%d",&data);
    data.type = 10;
    printf("\nthe status of the type field is %x", (data.type) & 1);
    data.type |= 1;
    printf("\nthe value of the type field after setting is %x\n",data.type);
    return 0;
}
