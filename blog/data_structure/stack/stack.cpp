//github: https://github.com/hueie/algorithm/blob/master/blog/stack.cpp
#include <stdio.h>
#define STACKSIZE 10
#define ERROR_VALUE 0xfffffff
int Stack[STACKSIZE];
int top = 0;

void Push(int data)
{
    if( top == STACKSIZE)
    {
        puts("More data cannot be stored");
        return;
    }
    Stack[top++] = data;
}

int Pop()
{
    if( top == 0)
    {
        puts("There's no data in Stack");
        return ERROR_VALUE;
    }
    return Stack[--top];
}

int main()
{
    Push(100);
    Push(200);
    Push(300);
    printf("%d\n", Pop());
    printf("%d\n", Pop());
    printf("%d\n", Pop());
}