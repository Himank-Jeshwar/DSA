#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct CustomArray{
    int total_size; // memory to be reserved
    int used_size; // memory to be used
    int *address;
}CustomArray;

int main()
{   
    
    int totalSize = 10*sizeof(int);
    int usedSize = 0;
    int *arr = (int*)(calloc(10,sizeof(int)));
    arr[0] = 33;
    arr[1] = 22;
    arr[2] = 31;
    arr[5] = 45;
    
    for (int i = 0;i<10;i++){
        if (arr[i]>0)
            usedSize++;
    }

    // printf("%d",usedSize);
    CustomArray cusArr = {totalSize,usedSize,&arr[0]};
    return 0;
}
