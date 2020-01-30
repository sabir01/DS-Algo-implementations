#include <bits/stdc++.h>
using namespace std;

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
    swap(arr[i+1], arr[hi]);

    return i+1;
}
///pivot niye lo theke hi porjonto sort kore felbo
void Quicksort(int arr[], int lo, int hi)
{
    if(lo < hi)
    {
        int p = Partition(arr,lo,hi);

        Quicksort(arr, lo, p - 1);
        Quicksort(arr, p + 1, hi);
    }
}

int main()
{
    int arr[] = {5,4,3,2,1};

    int n = 5;

    Quicksort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}
