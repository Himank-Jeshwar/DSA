#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
}Node;

void set (Node *ptr1,Node *ptr2,int data){
    ptr1->data = data;
    ptr1->next = ptr2;
}

void show (Node *head){
    Node *ptr = head->next;
    printf("%d ",head->data);

    while(ptr!=head){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

    printf("\n");
}


int main()
{
    Node *first,*second,*third,*fourth,*fifth;
    first = (Node *)(malloc(sizeof(Node)));
    second = (Node *)(malloc(sizeof(Node)));
    third = (Node *)(malloc(sizeof(Node)));
    fourth = (Node *)(malloc(sizeof(Node)));
    fifth = (Node *)(malloc(sizeof(Node)));
    
    set(first,second,23);
    set(second,third,9);
    set(third,fourth,11);
    set(fourth,fifth,44);
    set(fifth,first,91);
    
    show(first);
    return 0;
}
