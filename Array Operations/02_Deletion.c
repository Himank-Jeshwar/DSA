#include <stdio.h>

void show(int arr[],int n){
    for (int i = 0 ;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void delete (int arr[],int size,int index){ 
    
    for (int i = index ; i< size-1 ;i++){
        arr[i] = arr[i+1];
    }
    
}
int main(){
    int capacity = 100, size = 5;
    
    int arr [100] = {7,8,12,27,88};
    delete(arr,size,2);
    size--;
    delete (arr,size,3);
    size--;
    show(arr,size);
    return 0;
}