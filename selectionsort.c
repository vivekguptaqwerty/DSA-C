#include <stdio.h>
int printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionsort(int *A, int n){
    int indexOfMin, temp;
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j]< A[indexOfMin])
            {
                indexOfMin = j;
            }
            
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
    
}
int main() {
    // Your code goes here
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter values of Elements: ");
    for(int i=0; i<n;i++){
        scanf("%d", &A[i]);
    }
    printf("Before Selection sort\n");
    printArray(A, n);
    selectionsort(A, n);
    printf("After Selection sort\n");
    printArray(A, n);
    return 0;
}