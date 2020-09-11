//github: https://github.com/hueie/algorithm/blob/master/blog/data_structure/linkedlist/doubly_linked_list.cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} LINKEDLIST, *PLINKEDLIST;

int main()
{
    PLINKEDLIST head = NULL, p, n1, n2, n3;

    head = n1 = (PLINKEDLIST)malloc(sizeof(LINKEDLIST));
    n1->data = 10;
    n1->prev = NULL;
    n1->next = NULL;

    n2 = (PLINKEDLIST)malloc(sizeof(LINKEDLIST));
    n2->data = 20;
    n2->prev = NULL;
    n2->next = NULL;

    n3 = (PLINKEDLIST)malloc(sizeof(LINKEDLIST));
    n3->data = 30;
    n3->prev = NULL;
    n3->next = NULL;

    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;


    puts("Forward direction");
    for(p = head; p; p = p->next){
        printf("%d\n", p->data);
    }

    puts("Backward direction");
    for(p = n3; p; p = p->prev){
        printf("%d\n", p->data);
    }
}
