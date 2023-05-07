#include <stdio.h>
#include <stdlib.h>
/* Stack operations 
    push()
    pop()
    peek(index)
    isEmpty()
    isFull ()
*/

typedef struct Stack{
    int size;
    int capacity;
    int *arr;
    int top;
}Stack;

Stack newStack(Stack st,int capacity){
    st.capacity = capacity;
    st.size = 0;
    st.top = -1;
    st.arr = (int *)(malloc(capacity*sizeof(int)));

    return st;
}

int main()
{
    Stack stk = newStack(stk,5); // creates a stack

    return 0;
}
