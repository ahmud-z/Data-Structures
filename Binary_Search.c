#include<stdio.h>

int binary_search(int arr[], int low, int high, int s_value)
{
    if(high<low)
    {
        return -1;
    }

    int mid = (low+high)/2;

    if(arr[mid]==s_value)
    {
        return mid;
    }

    if(s_value<mid)
    {
        return binary_search(arr, low, mid-1, s_value);
    }

    return binary_search(arr, mid+1, high, s_value);
}


int main()
{
    int sz, i, s_value;

    printf("Enter array size: ");
    scanf("%d",&sz);
    printf("\n");

    int arr[sz];

    printf("Enter %d sorted element: \n",sz);
    for(i=0; i<sz; i++)
    {
        printf("Enter in index[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    int low = 0;
    int high = sz-1;

    printf("Enter a value to search: ");
    scanf("%d",&s_value);
    printf("\n");

    int flag = binary_search(arr, low, high, s_value);

    if(flag==-1)
    {
        printf("Value not found\n");
    }
    else
    {
        printf("value found!\nAt %d index position.\n",flag);
    }

    printf("\n");
    return 0;
}
