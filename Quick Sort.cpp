#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int lo, int hi)
{
    int pivot = arr[hi];
    int i = lo - 1;

    for(int j = lo; j < hi; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[hi]);
    return i + 1;
}
void QuickSort(int arr[], int lo, int hi)
{
    if(lo < hi)
    {
        int p = Partition(arr,lo,hi);
        QuickSort(arr,lo,p-1);
        QuickSort(arr,p+1,hi);
    }
}

int main()
{
    int arr[] = {7,6,5,4,3,2,1};
    QuickSort(arr,0,6);
    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//////// Complexity ////////////////////////////////////////////////////
//     Average Case : O(n log (n))      Average
//     Best Case : O(n log (n))         When the array is already sorted
//     Worst Case : O(n^2)              When the array is REVERSE sorted
////////////////////////////////////////////////////////////////////////
