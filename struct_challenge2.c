#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct item
{
    char *name;
    float quantity;
    float price;
    float amount;
};

void read(struct item *ptr);
void print(struct item *ptr);

int main(int argc, char const *argv[])
{
    struct item new_item;
    read(&new_item);
    print(&new_item);
    
    return 0;
}

void read(struct item *ptr)
{
    int n=0;
    printf("enter an upper bound for the number of characters for the item name: \n");
    scanf("%d",&n);
    ptr->name = (char*) malloc(n * sizeof(char));
    printf("enter the item name: \n");
    scanf(" ");
    fgets((*ptr).name, n, stdin);
    printf("\nenter the quantity of the item: ");
    scanf("%f",&ptr->quantity);
    printf("\nenter the price of the item: ");
    scanf("%f",&ptr->price);
    ptr->amount = ptr->quantity * ptr->price;
}

void print(struct item *ptr)
{
    printf("\nname of the item is: %s", ptr->name);
    free(ptr->name);
    ptr->name = NULL;
    printf("\nthe price of the item per unit is %.2f", ptr->price);
    printf("\nthe quantity of the item is %.2f", ptr->quantity);
    printf("\nthe total price of the item is %.2f\n", ptr->amount);

}