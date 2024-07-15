#include <stdio.h>

void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high) {
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do {
        while (A[i] <= pivot && i <= high) {
            i++;
        }
        while (A[j] > pivot && j >= low) {
            j--;
        }

        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int A[], int low, int high) {
    int partitionIndex;
    if (low < high) {
        partitionIndex = partition(A, low, high);
        quicksort(A, low, partitionIndex - 1);
        quicksort(A, partitionIndex + 1, high);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter values of elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Before Quick sort:\n");
    printArray(A, n);
    quicksort(A, 0, n - 1);
    printf("After Quick sort:\n");
    printArray(A, n);
    return 0;
}
