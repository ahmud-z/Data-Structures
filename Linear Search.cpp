#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz, int searchValue)
{
    int flag = -1;

    for(int i = 0; i<sz; i++)
    {
        if(arr[i] == searchValue)
        {
            flag = i;
            break;
        }
    }
    return flag;
}

void printArray(int arr[], int sz)
{
    cout<<"\nArray elements: ";

    for(int i = 0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[] = {6,1,5,4,3,10,2,7,9,8};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int seachValue;

    cout <<"Enter a value to search: ";
    cin>>seachValue;


    printArray(arr,sizeof(arr)/sizeof(arr[0]));

    int flag = linearSearch(arr,sz,seachValue);

    if(flag == -1)
    {
        cout<<"value not found"<<endl;
    }
    else
    {
        cout<<"value found at index "<<flag<<" position"<<endl;
    }

    cout<<endl;
    return 0;
}
