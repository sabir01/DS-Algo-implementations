#include <bits/stdc++.h>

using namespace std;

#define spc " "
#define nl "\n"
#define FOR(n) for(int i = 0; i < n; i++)

void Merge(int arr[], int l, int m, int r);
void Mergesort(int arr[], int l, int r);
void Sort(int arr[], int n)
{
    Mergesort(arr, 0, n - 1);
}

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
    int n1 = m - l + 1;
    int n2 = r - m;
//    creating the
//    left array
//    and the
//    right array
    int L[n1], R[n2];


    for(i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for(i = 0; i < n2; i++)
    {
        R[i] = arr[m+i+1];
    }
    i = j = 0;
    k = l;
//    this while loop actually does the sorting, or more precisely
//    puts the smaller elements on the left side
//    and
//    bigger elements on the right side
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
//    putting the rest of the elements that didn't
//    get assigned to some space
//    gets their place
//    in
//    the array
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }


}
void Mergesort(int arr[], int l, int r)
{
    if(l < r)
    {
        int m = l + (r - l) / 2;

        Mergesort(arr, l, m);
        Mergesort(arr, m+1, r);

        Merge(arr, l, m, r);
    }
}
