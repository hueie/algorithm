//github: https://github.com/hueie/algorithm/blob/master/blog/stack_encapsulation.cpp
#include <stdio.h>
typedef int STACKDATA;
#define STACKSIZE 10
#define ERROR_VALUE (STACKDATA)0xfffffff

void Push(STACKDATA Stack[], int *top, STACKDATA data)
{
    if( *top == STACKSIZE)
    {
        puts("More data cannot be stored");
        return;
    }
    Stack[(*top)++] = data;
}

int Pop(STACKDATA Stack[], int *top)
{
    if( (*top) == 0)
    {
        puts("There's no data in Stack");
        return ERROR_VALUE;
    }
    return Stack[--(*top)];
}

int main()
{
    puts("stack encapsulation");
    STACKDATA Stack[STACKSIZE];
    int top = 0;
    Push(Stack, &top, 100);
    Push(Stack, &top, 200);
    Push(Stack, &top, 300);
    printf("%d\n", Pop(Stack, &top));
    printf("%d\n", Pop(Stack, &top));
    printf("%d\n", Pop(Stack, &top));
}