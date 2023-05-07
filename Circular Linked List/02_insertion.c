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
    Node *ptr = head;

    do{
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);

    printf("\n");
}

Node * insertAtBegin(Node *head,int data){
    
    Node *ptr = (Node*)malloc(sizeof(Node));
    ptr->data = data;
    Node * p = head;

    do{
        p = p->next;
    }while(p->next!=head);

    // At this p points to the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr; // updating head
    return head;
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
    
    first = insertAtBegin(first,45);
    show(first);
    return 0;
}
