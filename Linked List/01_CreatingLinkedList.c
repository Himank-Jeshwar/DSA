#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;

void set(Node *nd1 ,Node *nd2,int element){
    nd1->data = element;
    nd1->next = nd2;
}

void show(Node *ptr){
    while (ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    Node *head,*secondNode,*thirdNode,*fourthNode;

    // allocate memory for nodes in the linked list in heap
    head = (Node *)(malloc(sizeof(Node)));
    secondNode = (Node *)(malloc(sizeof(Node)));
    thirdNode = (Node *)(malloc(sizeof(Node)));
    fourthNode = (Node *)(malloc(sizeof(Node)));

    set(head,fourthNode,7);
    set (fourthNode,secondNode,12);
    set(secondNode,thirdNode,11);
    set(thirdNode,NULL,66);// terminate the linked list

    // 7,12,11,66
    show(head);

    return 0;
}
