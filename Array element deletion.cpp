#include <iostream>
using namespace std;

void deleteElement(int arr[], int sz, int value)
{
    int flag = 0;

    for(int i = 0; i<sz; i++)
    {
        if(arr[i] == value)
        {
            flag = i;
            break;
        }
    }

    for(int i = flag; i<sz; i++)
    {
        arr[i] = arr[i+1];
    }

}

void printArray(int arr[], int sz)
{
    cout << "\nArray elements: ";

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int sz, dValue;

    cout << "Enter array size: ";
    cin >> sz;

    int arr[sz];

    cout<<"Enter array element: ";
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    cout<<"Enter a element to delete: ";
    cin>>dValue;

    deleteElement(arr,sz,dValue);
    printArray(arr, sz);

    return 0;
}
