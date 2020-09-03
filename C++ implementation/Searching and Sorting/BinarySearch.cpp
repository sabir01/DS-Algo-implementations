#include <bits/stdc++.h>
using namespace std;

// Recursive Binary Search
int recursiveBinarySearch(int arr[], int left, int right, int x)
{
    if(left > right)
        return -1;
    int mid = (left + right)/2;
    if(x < arr[mid])
        return recursiveBinarySearch(arr, left, mid-1, x);
    else if(x > arr[mid])
        return recursiveBinarySearch(arr, mid+1, right, x);
    else
        return mid;
}

int iterativeBinarySearch(int arr[], int n, int x)
{
    int left = 0, right = n - 1 ;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(x < arr[mid])
            right = mid - 1;
        else if(x > arr[mid])
            left = mid + 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    cout << iterativeBinarySearch(arr, 5, 2);
}