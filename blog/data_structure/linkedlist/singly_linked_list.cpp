/github: https://github.com/hueie/algorithm/blob/master/blog/data_structure/linkedlist/singly_linked_list.cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} LINKEDLIST, *PLINKEDLIST;

int main()
{
    PLINKEDLIST head = NULL, p, n1, n2, n3;

    head = n1 = (PLINKEDLIST)malloc(sizeof(LINKEDLIST));
    n1->data = 10;
    n1->next = NULL;

    n2 = (PLINKEDLIST)malloc(sizeof(LINKEDLIST));
    n2->data = 20;
    n2->next = NULL;

    n3 = (PLINKEDLIST)malloc(sizeof(LINKEDLIST));
    n3->data = 30;
    n3->next = NULL;

    n1->next = n2;
    n2->next = n3;

    for(p = head; p; p = p->next){
        printf("%d\n", p->data);
    }
    //Reverse direction
    head = n3;
    n3->next = n2;
    n2->next = n1;
    n1->next = NULL;

    for(p = head; p; p = p->next){
        printf("%d\n", p->data);
    }
}