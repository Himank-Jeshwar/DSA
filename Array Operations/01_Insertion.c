#include <stdio.h>
void show(int arr[],int n){
    for (int i = 0 ;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

/*

7 8 12 27 88 
7  45   8    12     27    88  
*/
int insert (int arr[],int size,int capacity,int el,int index){
    if (size>=capacity)
        return 0;

    // shifting the elements to the right
    for (int i = size-1;i>=index;i--)
        arr[i+1] = arr[i];

    // assigning the element to the given index
    arr[index] = el;
    return 1;
}

int main(){

    int capacity = 100, size = 5;
    int arr[capacity] = {7,8,12,27,88};
    
    // show(arr,size);
    if (insert (arr,size,capacity,45,1)==1){
        size++;
        show(arr,size);
    }
    else
        printf("Insertion failed !");
    
    
    return 0;
}