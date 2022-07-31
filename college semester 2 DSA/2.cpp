#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return - 1;
}

int deleteElement(int arr[], int n,
                int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == - 1)
    {
        cout << "Element not found";
        return n;
    }
 
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}

int insertSorted(int arr[], int n, int key, int capacity)
{
 
    // Cannot insert more elements if n is
    // already more than or equal to capacity
    if (n >= capacity)
    return n;
 
    arr[n] = key;
 
    return (n + 1);
}

int main(){
    //for insert
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;
 
    cout << "\n Before Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i]<< " ";
 
    // Inserting key
    n = insertSorted(arr, n, key, capacity);
 
    cout << "\n After Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    //for delete
    int i;
    int arr[] = {10, 50, 30, 40, 20};
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
 
    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
    cout << arr[i] <<" " ;
 
    n = deleteElement(arr, n, key);
 
    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
    cout << arr[i] << " ";
 
    return 0;
}