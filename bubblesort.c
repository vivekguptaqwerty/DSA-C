#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements of an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);
    return 0;
}