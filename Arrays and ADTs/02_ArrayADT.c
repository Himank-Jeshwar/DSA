#include <stdio.h>
#include <stdlib.h>
typedef struct CustomArray{
    int total_size; // memory to be reserved
    int used_size; // memory to be used
    int *address;
}CustomArray;

void createArray(CustomArray *obj,int tSize,int uSize){
    obj->total_size = tSize;
    obj->used_size = uSize;
    obj->address = (int *)(malloc(tSize*sizeof(int)));
}

void show(CustomArray *arr){
    for (int i = 0;i<arr->used_size;i++){
        printf("%d ",(arr->address[i]));
    }
}

void set(CustomArray *arr,int el,int index){
    arr->address[index] = el;
}

int get (CustomArray *arr,int index){
    return arr->address[index];
}

int main(){
    CustomArray marks;
    createArray(&marks,100,5);
    set (&marks,5,0);
    set (&marks,3,1);
    set (&marks,2,2);
    set (&marks,9,3);
    set (&marks,10,4);
    insert (&marks,67,3);
    // insert (&marks,99,3);
    show(&marks);
    // printf("\n%d ",get(&marks,0));
    return 0;
}