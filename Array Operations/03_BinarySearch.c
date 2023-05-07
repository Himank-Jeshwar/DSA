#include <stdio.h>

int main(){
    int arr[9] = {2,8,14,32,66,100,104,200,400};
    int search = 100;
    int start = 0 , end = sizeof(arr)/4 - 1;
    int middle;

    // time complexity = O(log n)
    while (start<=end){
        middle = (start+end)/2;
        if (search==arr[middle]){
            printf("Element found at index %d",middle);
            break;
        }

        else if (search<arr[middle])
            end = middle-1;

        else if (search>arr[middle])
            start = middle+1;
        
    }

    if (start>end)
        printf("Element not found !");
    
    return 0;
}