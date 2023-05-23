#include<iostream>
using namespace std;

void printArray(int arr[], int sz)
{
    for(int i = 0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int sz;
    int value, position;

    cout<<"Enter array size: ";
    cin>>sz;

    int arr[sz];

    cout<<"Enter array elements: ";
    for(int i = 0; i<sz; i++)
    {
        cin>>arr[i];
    }


    cout<<"\nEnter a value for insert in array: ";
    cin>>value;

    cout<<"Enter the position to insert value: ";
    cin>>position;

    cout<<"\nArray Element Before Value Insertion: "<<endl;
    printArray(arr,sz);

    for(int i = sz; i>=position; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[position] = value;

    cout<<"Array Element After Value Insertion: "<<endl;
    printArray(arr,sz+1);

    return 0;
}
