#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int *arr;
int rear,front;
rear=-1;
front=-1;

int create()
{
    int n;
    printf("ENTER THE NO OF ELEMENTS IN QUEUE\n");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    return n;
}

bool isempty()
{
    return front==-1;
}
bool isfull(int n)
{
    return rear==n-1;
}

void enqueue(int data,int n)
{
    if(isfull())
    {
        
    }
}