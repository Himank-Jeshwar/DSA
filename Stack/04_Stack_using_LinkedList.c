#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int isFull(){
    Node *ptr = (Node*)(malloc(sizeof(Node)));
    if (ptr==NULL) // cannot request memory in heap if full and returns NULL
        return 1;
    return 0;
}

Node* push(Node *top,int data){
    Node *ptr = (Node*)(malloc(sizeof(Node)));

    if(isFull()==0){
        ptr->data = data;
        ptr->next = top;
        top = ptr;
    }
    return top;
}

int isEmpty(Node *top){
    if (top==NULL)
        return 1;
    return 0;
}


int pop(Node **top){
    Node *ptr;
    
    if (isEmpty(*top)==0){
        ptr = *top;
        *top = (*top)->next;
        int x = ptr->data;
        free(ptr);
        return x;
    }

    else {
        printf("Stack Underflow.");
        exit(0);
    }
}

int peek(Node *top,int position){
    Node *ptr = top;
    if (position>0){
        for (int i = 0;(i<position-1&&ptr!=NULL);i++){
            ptr = ptr->next;
        }
        if (ptr==NULL){
            printf("Position does not exist.");
            exit(0);
        }
        return ptr->data;
    }
    else{ 
        printf("Invalid Position");
        exit(0);
    }
}

int stackTop(Node *top){
    return top->data;
}
int stackBottom(Node *top){
    Node *ptr = top;
    while(ptr->next!=NULL){
        ptr = ptr->next; 
    }
    return ptr->data;
}
void show(Node *top){
    Node *ptr = top;
    while (ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    Node * topNode = (Node*)(malloc(sizeof(Node)));
    
    topNode = NULL;
    topNode = push(topNode,155);
    topNode = push(topNode,505);
    topNode = push(topNode,67);
    topNode = push(topNode,321);
    topNode = push(topNode,55);
    topNode = push(topNode,59);
    topNode = push(topNode,35);
    topNode = push(topNode,885);
    
    int x = peek(topNode,8);
    // int p = pop(&topNode);
    // x = peek(topNode,2);
    // topNode = pop(topNode);
    // topNode = pop(topNode);
    // topNode = pop(topNode);
    if (isEmpty(topNode)==1)
        printf("Stack is Empty.");
    else if (isFull()==1)
        printf("Stack is Full.");

    printf("Stack Top - %d\n",stackTop(topNode));
    printf("Stack bottom - %d\n",stackBottom(topNode));
    printf("Peek operation : %d\n",x);
    // printf("Element Popped : %d\n",p);
    show(topNode);
    return 0;
}