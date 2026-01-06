#include <stdio.h>
#include <stdlib.h>
void create_list(int data);
struct node_{
    void *data;
    struct node_ *link;
}node;



void create_list(int data)
{
    
    printf("%d",data);
}

int main()
{
    create_list(9);
    return 0;
}