#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
}Node;

// case 1
Node* insertAtBegin(Node *headnode,int data){
    Node *ptr = (Node *)(malloc(sizeof(Node)));
    ptr->next = headnode;
    ptr->data = data;
    return ptr;
}

// case 2
Node* insertAtIndex(Node *head,int element,int index){
    Node * newNode = (Node*)(malloc(sizeof(Node)));
    Node * copy = head;

    for (int i = 0;i!=index-1;i++){
        copy = copy->next;
    }
    newNode->next = copy->next;
    copy->next = newNode;
    newNode->data = element;

    return newNode;
}

// case 3
Node* insertAtEnd(Node *head,int element){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;
    Node *copy = head;
    while (copy->next!=NULL){
        copy = copy->next;
    }

    copy->next = newNode;
    newNode->next = NULL;
    
    return head;
}

// case 4
Node* insertAfterNode(Node *givenPtr,int data){
    Node *newPtr = (Node*)malloc(sizeof(Node));
    newPtr->data = data;
    newPtr->next = givenPtr->next;
    givenPtr->next = newPtr;

    return newPtr;
}
void set(Node *nd1 ,Node *nd2,int element){
    nd1->data = element;
    nd1->next = nd2;
}

void show(Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    Node *first,*second,*third,*fourth;
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    set(first,second,4);
    set(second,third,6);
    set(third,fourth,8);
    set(fourth,NULL,10);
    show(first);
    
 
    // set(newHead,first,2);

    // node to be inserted

    // Node * newHead = insertAtBegin(first,55);
    Node * newNode;
    newNode = insertAfterNode(third,78);
    // insertAtIndex(second,newNode,2);
    // 
    // insertAtEnd(first,newNode);
    show(first);
    return 0;
}
