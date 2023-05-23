#include<stdio.h>

void print_array(int arr[], int sz)
{
    int i;

    for(i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertion_sort(int arr[], int sz)
{
    int i,j;

    for(i=0; i<sz; i++)
    {
        j = i;

        while(j>0 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main()
{
    int sz;

    printf("Enter array size: ");
    scanf("%d",&sz);
    printf("\n");
    int arr[sz];

    for(int i=0; i<sz; i++)
    {
        printf("Enter value in index[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    insertion_sort(arr,sz);
    print_array(arr,sz);
    return 0;
}
