//github: https://github.com/hueie/algorithm/blob/master/blog/data_structure/linkedlist/singly_linked_list.cpp
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node {
    int data;
    struct node *next;
} LINKEDLIST, *PLINKEDLIST;

PLINKEDLIST nodeAlloc(int data)
{
    PLINKEDLIST p = (PLINKEDLIST)malloc(sizeof(LINKEDLIST));
    p->data =data;
    p->next = NULL;
    return p;
}
PLINKEDLIST insertNode(PLINKEDLIST head, int data)
{
    PLINKEDLIST p = head, n = nodeAlloc(data);
    if(head == NULL){
        //first node
        return n;
    }
    while(p->next)
    { //find the last node
        p = p->next;
    }
    // add new node to the reference to the last
    p->next = n;
    return head;
}
PLINKEDLIST deleteNdoe(PLINKEDLIST head, int data)
{
    PLINKEDLIST p = head, pp;
    while(p && p->data != data)
    {
        pp = p;
        p = p->next;
    }
    if(p == NULL)
    {
        puts("No data");
    }
    else if(p == head)
    {
        head = p->next;
        free(p);
    }
    else
    {
        pp->next = p->next;
        free(p);
    }
    return head;
}
void printNode(PLINKEDLIST p)
{
    int i;
    for(i=0; p; p = p->next, i++)
    {
        printf("%d ; [%d]\n", i, p->data);
    }
}
void menu()
{
    puts("");
    puts("1. Insert integer");
    puts("2. Delete integer");
    puts("3. Print integer");
    puts("4. Terminate");
    puts("=====================");
}
void Input(PLINKEDLIST *nHead)
{
    *nHead = insertNode(*nHead, rand() % 1000);
    puts("Complete to insert integer.")
}
void Remove(PLINKEDLIST * nHead)
{
    int n;
    printf("Type integer to be deleted");
    scanf("%d", &n);
    *nHead = deleteNode(*nHead,n);
}
void Output(PLINKEDLIST nHead)
{
    printNode(nHead);
}
void main()
{
    PLINKEDLIST nHead = NULL;
    int bContinue = 1;

    while(bContinue)
    {
        menu();
        switch (getch()) {
            case '1':
                Input(&nHead);
                break;
            case '2':
                Remove(&nHead);
                break;
            case '3':
                Output(nHead);
                break;
            case '4':
                bContinue = !bContinue;
                break;
            default:
                puts("Only available command from 1 to 4.")
        }
    }
}
