#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
}Node;

void set (Node *prev,Node *current,Node *next,int element){
    current->data = element;
    current->prev = prev;
    current->next = next;
}

void show (Node *head){
    Node * ptr = head;
    do{
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }while(ptr->next!=NULL);
    
    printf("%d\n",ptr->data);
    // printf("\n");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}
int main()
{
    Node *n1,*n2,*n3,*n4,*n5;
    n1 = (Node *)malloc(sizeof(Node));
    n2 = (Node *)malloc(sizeof(Node));
    n3 = (Node *)malloc(sizeof(Node));
    n4 = (Node *)malloc(sizeof(Node));
    n5 = (Node *)malloc(sizeof(Node));
    
    set(NULL,n1,n2,34);
    set(n1,n2,n3,88);
    set(n2,n3,n4,90);
    set(n3,n4,n5,11);
    set(n4,n5,NULL,38);

    show(n1);
    return 0;
}
