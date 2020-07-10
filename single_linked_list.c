#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *next;
};

typedef struct node node_obj;

int is_empty(node_obj *head){
    return (int) (head->next==NULL);
}

void insert_end(node_obj *head, char *data){
    if (is_empty(head)){
        node_obj *new_node = malloc(sizeof(node_obj));
        new_node->data = *data;
        new_node->next = NULL;
        head->next = new_node;
    }
    else
    {
        node_obj *new_node = malloc(sizeof(node_obj));
        new_node->data = *data;
        new_node->next = NULL;
        node_obj *current = NULL;
        current = head;
        while (current->next!=NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
}

void insert_start(node_obj *head, char *data){
    if (is_empty(head)){
        node_obj *new_node = malloc(sizeof(node_obj));
        new_node->data = *data;
        new_node->next = NULL;
        head->next = new_node;
    }
    else
    {
        node_obj *new_node = malloc(sizeof(node_obj));
        new_node->data = *data;
        new_node->next = head->next;
        head->next = new_node;        
    }
}

node_obj *pop_end(node_obj *head){
    if (is_empty(head)){
        return NULL;
    }
    else
    {
        node_obj *prev = head ,*removed = head->next;
        while (removed->next!=NULL)
        {
            prev = removed;
            removed = removed->next;
        }
        prev->next=NULL;
        return removed;
    }
    
}

node_obj *pop_start(node_obj *head){
    if (is_empty(head)){
        return NULL;
    }
    else
    {
        node_obj *removed = head->next;
        head->next = removed->next;
        return removed;
    }
    
}

void insert_ordered(node_obj *head, char *data){
    if (is_empty(head)){
        node_obj *new_node = malloc(sizeof(node_obj));
        new_node->data = *data;
        new_node->next = NULL;
        head->next = new_node;
    }
    else
    {   node_obj *prev = head;
        node_obj *current = head->next;
        while (*data > current->data && current->next != NULL)
        {   
            prev = current;
            current = current->next;
        }
        node_obj *new_node = malloc(sizeof(node_obj));
        prev->next = new_node;
        new_node->data = *data;
        new_node->next = current;

    }
}
    
node_obj *delete_character(node_obj *head,  char *data)
{
    if (is_empty(head)){
    node_obj *new_node = malloc(sizeof(node_obj));
    new_node->data = *data;
    new_node->next = NULL;
    head->next = new_node;
    return NULL;
    }
else
{
    node_obj *current, *prev;
    prev = head;
    current = head->next;
    while (current->data!=*data && current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    if (current->next==NULL){
        return NULL;
    }
    else
    {
        prev->next = current->next;
        return current;
    }
}
    
}

void delete_list(node_obj *head){
    
    if (is_empty(head)==0){

    node_obj *temp = head->next;
    while (1)
    {   
        if (temp->next==NULL)
        {
            break;
        }
        
        head->next = temp->next;
        free(temp);
        temp = head->next;
    }
    free(temp);
    head->next = NULL;
}
}

void print_list(node_obj *head){
    
    node_obj *current=head->next;
    while (current->next!=NULL)
    {
        printf("%c->", current->data);
        current = current->next;
    }
    printf("%c\n",current->data);
    
}

int main(int argc, char const *argv[])
{
    char data;
    int opt;
    // initializing a list
    node_obj *temp, *list = malloc(sizeof(node_obj));
    list->data = '\0';
    list->next = NULL;
    printf("enter the choice of operation:\n1. -> insert at end\n2. -> insert at start\n3. -> delete at end\n4. -> delete at start\n \
    5. -> insert alphabetically ordered\n6. -> delete character\n7. -> delete list\n8. -> print_list\n");
    scanf("%d",&opt);
    while (opt!=8)
    {
        switch (opt)
        {
        case 1:
            printf("enter a character to insert at end\n");
            scanf(" %c",&data);
            insert_end(list, &data);
            break;

        case 2:
            printf("enter a character to insert at start\n");
            scanf(" %c",&data);
            insert_start(list, &data);
            break;
        
        case 3:
            temp = pop_end(list);
            printf("character at end is %c\n", temp->data);
            break;
        
        case 4:
            temp = pop_start(list);            
            printf("character at start is %c\n", temp->data);
            break;
        
        case 5:
            printf("enter a character to insert at alphabetically\n");
            scanf(" %c",&data);
            insert_ordered(list, &data);
            break;
        
        case 6:
            printf("enter a character to insert at alphabetically\n");
            scanf(" %c",&data);
            delete_character(list, &data);
            break;
        
        case 7:
            printf("deleting list...\n");
            scanf(" %c",&data);
            delete_list(list);
            printf("DONE!\n");
            break;

        default:
            break;
        }
        printf("enter your next choice:\n");
        scanf("%d", &opt);
    }
    system("clear");
    printf("printing list...\n");
    print_list(list);
    return 0;
}

