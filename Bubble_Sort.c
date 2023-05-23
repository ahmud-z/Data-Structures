#include<stdio.h>

void print_array(int arr[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);
    }
}

void bubble_sort(int arr[], int sz)
{
    int i, j;

    for(i=0; i<sz; i++)
    {
        for(j=i; j<sz; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int sz, i;

    printf("Enter array size: ");
    scanf("%d",&sz);
    printf("\n");

    int arr[sz];

    for(i=0; i<sz; i++)
    {
        printf("Enter value at index position[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    bubble_sort(arr, sz);
    printf("Sorted array elements: ");
    print_array(arr, sz);

    printf("\n");
    return 0;
}
