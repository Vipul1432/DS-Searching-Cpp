#include <iostream>
using namespace std;

// Function that takes array & size  and return an array

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    cout << "Enter the array element : ";

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the number that you want to Search : ";
    cin >> key;
    cout << "The element is present at : " << linearSearch(arr, n, key) << endl;
    return 0;
}