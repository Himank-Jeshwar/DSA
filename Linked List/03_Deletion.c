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
Node * deleteFirstNode(Node *head){
    Node * ptr = head; // previous head
    head = head->next;
    free(ptr);
    return head;
}

Node* deleteAtIndex(Node *head,int index){
    Node * ptr = head;
    Node * q = head->next;

    for (int i = 0;i<index-1;i++){
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = q->next;
    free(q);
    return head;
} 
// [8] -> [9] -> [10] -> NULL
//                p         
Node* deleteLastNode(Node *head){
    Node *ptr = head;
    Node *q = head->next;
    while (q->next!=NULL){
        ptr = ptr->next;
        q = q->next;
    }   
    ptr->next = q->next;
    free(q);

    return head;
}
// [8] -> [9] -> [10] -> [11] -> NULL
//         p       q     

Node * deleteWithValue(Node *head,int val){
    Node * p = head;
    Node * q = head->next;
    while (q->data!=val&&q->next!=NULL){
        p = p->next;
        q = q->next;
    }

    if (q->data==val){
        p->next = q->next;
        free(q);
    }
    else
        printf("Value not found !\n");
    return head;
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
    
    // head = deleteFirstNode(head);
    // Node *newNode = (Node*)(malloc(sizeof(Node)));
    // second = deleteAtIndex(head,1);
    // head = deleteAtIndex(head,2);    
    // head = deleteLastNode(head);
    head = deleteWithValue(head,89);

    show(head);
    return 0;
}
