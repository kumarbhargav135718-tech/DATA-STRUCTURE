#include <stdio.h>

int main()
{
    int arr[10];
    int n = 10;
    int pos, i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\nEnter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid Position!\n");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;


    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
