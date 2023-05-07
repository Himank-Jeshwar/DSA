#include <stdio.h>
#include <stdlib.h>

typedef struct ArrayList{
    int capacity;
    int size;
    int *address;
    int datatype;
}ArrayList;

void createArray(ArrayList *arr,int capacity,int size,int datatype){
    arr->capacity = capacity;
    arr->size = size;
    arr->datatype = datatype;
    arr->address = (int *)(malloc(capacity*sizeof(datatype)));
}

void print(ArrayList *arr){
    printf("[");
    for (int i = 0;i<arr->size;i++){
        
        // else if (arr->datatype>)
    }
    printf("]");
}
int main()
{
    ArrayList arr;

    // createArray(&arr,10,3,sizeof(int));
    // arr.address[0]=1;
    // arr.address[1]=2;
    // arr.address[2]=3;
    // print(&arr);
    
    return 0;
}
