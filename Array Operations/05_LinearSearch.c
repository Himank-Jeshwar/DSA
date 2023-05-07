#include <stdio.h>

int main(){
    int arr [7] = {2,4,42,1,120,8,94};
    int search = 42;

    int i ; // loop counter

    // time complexity = O(n)
    for (i = 0;i<sizeof(arr)/4;i++){
        if (search==arr[i]){
            printf("Element found at index %d",i);
            break;
        }
    }

    if (i==sizeof(arr)/4)
        printf("Element not found!");
    return 0;
}