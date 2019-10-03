#include <bits/stdc++.h>
using namespace std;

void QuickSort(int arr[], int lo, int hi)
{
    if(lo < hi)
    {
        int p = Partition(arr,lo,hi);
        QuickSort(arr,lo,p-1);
        QuickSort(arr,p+1,hi);
    }
}
int Partition(int arr[], int lo, int hi)
{
    int pivot = arr[hi-1];
    int i = lo - 1;

    for(int j = lo; j <= hi - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[hi-1]);
    return i + 1;
}

int main()
{

}
