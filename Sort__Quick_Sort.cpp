#include <bits/stdc++.h>

using namespace std;

#define spc " "
#define nl "\n"
#define FOR(n) for(int i = 0; i < n; i++)

int Partition(int arr[], int lo, int hi);
void Quicksort(int arr[], int lo, int hi);
void Sort(int arr[], int n)
{
    Quicksort(arr, 0, n - 1);
}
int main()
{
    int arr[] = {5,3,7,3,1,2};
    Sort(arr, 6);
    FOR(6)
    {
        cout << arr[i] << " ";
    }
}

void Quicksort(int arr[], int lo, int hi)
{
    if(lo < hi)
    {
        int p = Partition(arr,lo,hi);

        Quicksort(arr,lo,p-1);
        Quicksort(arr,p+1,hi);
    }
}
int Partition(int arr[], int lo, int hi)
{
    int i, j;
    int pivot = arr[hi];
    i = lo - 1;

    for(j = lo; j < hi; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[hi]);//put pivot in the right position
    return i + 1;
}
//////// Complexity ////////////////////////////////////////////////////
//     Average Case : O(n log (n))      Average
//     Best Case : O(n log (n))         When the array is already sorted
//     Worst Case : O(n^2)              When the array is REVERSE sorted
////////////////////////////////////////////////////////////////////////
