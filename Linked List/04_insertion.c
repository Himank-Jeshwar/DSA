#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node * next;
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

Node * insertAtBegin(Node *head,int data){
    Node *ptr = (Node *)(malloc(sizeof(Node)));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// [8] -> [9]  -> [11] -> [10] -> NULL
//         p
Node * insertAtIndex(Node *ptr,int data,int index){
    Node *p = ptr;
    Node *q = (Node*)(malloc(sizeof(Node)));
    q->data = data;

    for (int i = 0;i<index-1;i++){
        p = p->next;
    }   
    
    q->next = p->next;
    p->next = q;
    
    return ptr;
}

// [8] -> [9]  -> [11] -> [10] -> NULL
//                         ptr
Node * insertAtLast(Node *head,int data){
    Node *ptr = head;
    Node *q = (Node *)(malloc(sizeof(Node)));
    q->data = data;
    while (ptr->next!=NULL){
        ptr = ptr->next;
    }

    q->next = ptr->next;
    ptr->next = q;
    return head;
}

Node *insertAfterNode(Node *nd,int data){
    Node *newNode = (Node *)(malloc(sizeof(Node)));
    newNode->data = data;
    newNode->next = nd->next;
    nd->next = newNode;
    return newNode;
}
int main()
{
    Node *head,*second,*third,*fourth,*fifth,*sixth,*seventh;
    head = (Node*)(malloc(sizeof(Node)));
    second = (Node*)(malloc(sizeof(Node)));
    third = (Node*)(malloc(sizeof(Node)));
    fourth = (Node*)(malloc(sizeof(Node)));
    fifth = (Node*)(malloc(sizeof(Node)));
    sixth = (Node*)(malloc(sizeof(Node)));
    seventh = (Node*)(malloc(sizeof(Node)));
    
    set(head,second,4);
    set(second,third,6);
    set(third,fourth,8);
    set(fourth,fifth,34);
    set(fifth,sixth,90);
    set(sixth,seventh,89);
    set(seventh,NULL,10);

    third = insertAfterNode(third,11);
    show(head);
    return 0;
}
