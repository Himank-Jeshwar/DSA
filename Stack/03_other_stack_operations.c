#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int size;
    int *arr;
    int top;
}Stack;

Stack newStack(Stack st,int size){
    st.size = size;
    st.top = -1;
    st.arr = (int *)(malloc(st.size*sizeof(int)));

    return st;
}

int isFull (Stack st){
    // time complexity = O(1)
    if (st.top==st.size-1)
        return 1;
    return 0;
}

void push(Stack *st ,int element){
    // time complexity = O(1)
    if (isFull(*st)==0)
        st->arr[++st->top] = element;

    else {
        printf("StackOverflowError : cannot add more elements since the stack is full");
        exit(0);
    }
}
int isEmpty(Stack st){
    // time complexity = O(1)
    if (st.top==-1)
        return 1;
    return 0;
}

int peek(Stack st,int position){
    // time complexity = O(1)
    int arrayInd = st.top-position+1;
    if (isEmpty(st)==0&&(arrayInd>=0&&arrayInd<=st.top))
        return st.arr[arrayInd];
    else if (isEmpty(st)==1){
        printf("NoElementPresentError : cannot find element since the stack is empty");
        exit(0);
    }
    else{
        printf("InvalidPositionError : cannot access element since the given index is out of range.");
        exit(0);
    }
}
// 
int pop(Stack *st){
    // time complexity = O(1)
    if (isEmpty(*st)==0)
        return st->arr[st->top--];
    else{
        printf("NoElementPresentError : cannot find element since the stack is empty");
        exit(0);
    } 

}

void show(Stack st){
    // time complexity = O(n) (where n is the no. of elements in stack)
    for (int i = 0;i<=st.top;i++){
        printf("%d\n",peek(st,i+1));
    }
}

// 3-3+1 = 1
// 3-4+1 = 0
// 3-5+1 = 1-2 = -1
int stackTop(Stack stk){
    return stk.arr[stk.top]; // O(1)
}

int stackBottom(Stack stk){
    return stk.arr[0];// O(1)
}
int main()
{
    Stack stk = newStack(stk,5);
    push(&stk,45);
    push(&stk,9);
    push(&stk,90);
    push(&stk,12);
    push(&stk,13);

    printf("Topmost element : %d\n",stackTop(stk));
    printf("Bottom Element : %d",stackBottom(stk));
    return 0;
}
