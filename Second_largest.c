#include <stdio.h>
#include <limits.h>

void SecondLargest(int arr[], int size) {
    int first, second;
    
    if (size < 2) {
        printf("Array size must be at least 2\n");
        return;
    }

    first = second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element\n");
    } else {
        printf("The second largest element is %d\n", second);
    }
}

int main() {
    int arr[]= { 20, 30, 40 ,50};
    int n = sizeof(arr)/ sizeof(arr[0]);
    SecondLargest(arr, n);
    return 0;
}
   /* int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array size must be at least 2\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    SecondLargest(arr, n);
    return 0;*/

