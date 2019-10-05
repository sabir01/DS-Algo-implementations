#include <bits/stdc++.h>

using namespace std;

void Merge(int arr[], int l, int m, int r);
void Mergesort(int arr[], int l, int r);
void Sort(int arr[], int n);

int main()
{
    int arr[] = {6,5,2,7,3,2,1,0};
    int n = 8;

    Sort(arr,n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for(i = 0; i < n2; i++)
    {
        R[i] = arr[m + i + 1];
    }

    i = j = 0;
    k = l;
    ///putting the small to the left and big to the right
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    ///dealing with the leftover
    while(i < n1)
        arr[k++] = L[i++];
    while(j < n2)
        arr[k++] = R[j++];
}
void Mergesort(int arr[], int l, int r)
{
    if(l < r)
    {
        int mid = ( l + r ) / 2;

        Mergesort(arr, l, mid);
        Mergesort(arr, mid + 1, r);

        Merge(arr, l, mid, r);
    }
}
void Sort(int arr[], int n)
{
    Mergesort(arr,0,n-1);
}
