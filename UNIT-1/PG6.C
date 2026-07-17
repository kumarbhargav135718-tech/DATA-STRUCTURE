#include <stdio.h>

int main()
{
    int arr[20];
    int n, i, pos, item;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &item);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);


    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }


    arr[pos - 1] = item;

    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
