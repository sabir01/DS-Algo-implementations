#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        // Here, you decide whether you want to sort in --> ascending <-- order
        //      ( arr[j] > key ) in the while loop
        // Or, descending order
        //      ( arr[j] < key ) in the while loop
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int A[] = {8,9,10,7,6,5,4,3,2,1};
    insertionSort(A,10);
    for(int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
}
