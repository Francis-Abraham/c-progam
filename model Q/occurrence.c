#include <stdio.h>

void occurrence(int arr[], int size)
{
    int count, i, j;
    printf("Element\tOccurrences\n");
    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                // Mark the counted element to avoid counting it again
                arr[j] = -1;
            }
        }
        if (arr[i] != -1)
        {
            printf("%d\t%d\n", arr[i], count);
        }
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    occurrence(arr, n);
    return 0;
}
