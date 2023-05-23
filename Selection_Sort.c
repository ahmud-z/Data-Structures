#include<stdio.h>

void print_array(int arr[], int sz)
{
    int i;

    for(i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);
    }
}

void selection_sort(int arr[], int sz)
{
    int i, j, smallest;

    for(i=0; i<sz; i++)
    {
        smallest = i;

        for(j=i+1; j<sz; j++)
        {
            if(arr[j]<arr[i])
            {
                smallest = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
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

    selection_sort(arr,sz);
    printf("Sorted array elements: ");
    print_array(arr,sz);

    printf("\n");

    return 0;
}
