//github: https://github.com/hueie/algorithm/blob/master/blog/data_structure/queue/linear_queue.cpp
#include <stdio.h>
#define QUEUESIZE 10
#define ERROR_VALUE 0xfffffff
int Queue[QUEUESIZE];
int front = 0;
int rear = 0;

void Add(int data)
{
    if( rear == QUEUESIZE)
    {
        puts("More data cannot be stored");
        return;
    }
    Queue[rear++] = data;
}

int Delete()
{
    if( front == rear )
    {
        puts("There's no data in Queue");
        return ERROR_VALUE;
    }
    return Queue[front++];
}

int main()
{
    Add(100);
    Add(200);
    Add(300);
    printf("%d\n", Delete());
    printf("%d\n", Delete());
    printf("%d\n", Delete());
}