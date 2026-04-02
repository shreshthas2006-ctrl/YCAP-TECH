#include<stdio.h>
#define size 100
int stack[size];
int index=-1;
void pushoperation(){
    int element;
    if(index==size-1){
        printf("stack is overflow...");
    }else{
         printf("Enter any element: ");
         scanf("%d",&element);
         index++;
         stack[index]=element;
    }
}
void popOperation(){
    if(index==-1){
        printf("Stack is empty:");
    }else{
        int n=stack[index];
        index--;
        printf("Element is deleted %d\n",n);
    }
}
