#include <iostream>
using namespace std;

// Function that takes an array, size of array and key value and return key index

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid < key])
        {
            return end = mid + 1;
        }
        else
        {
            return start = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the array element : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key value that you want to search : ";
    cin >> key;
    cout << "The element is present at : " << binarySearch(arr, n, key) << endl;
    return 0;
}