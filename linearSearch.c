#include <stdio.h>

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}
int main() {
    int arr[]= {2,4,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 4;

    int result = linearSearch(arr, size, target);

    if (result!=-1)
    {
        printf("Element found at index %d\n", result);
    }else{
        printf("Element not found");
    }
    
    
    return 0;
}