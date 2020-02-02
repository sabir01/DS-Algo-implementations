## Bismillahir Rahmanir Rahim ##
#
#
### sorting algorithms ###
#
# Author - Ahammad Sabir Siddiquee
# Date : 31-1-2020

import math

def bubbleSort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

def insertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        j = i - 1
        key = arr[i]
        while arr[j] > key and j >= 0:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

def mergeSort(arr, lo, hi):
    if lo < hi:
        mid = math.ceil((lo + hi) / 2)
        mergeSort(arr, lo, mid)
        mergeSort(arr, mid+1, hi)
        merge(arr, lo, mid, hi)
    return
def merge(arr, lo, mid, hi):
    L = arr[:mid]
    L.append(9999999999999)
    R = arr[mid:]
    R.append(9999999999999)
    i = j = 0
    for k in range(lo, hi):
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        elif arr[k] == R[j]:
            j += 1
    

def countingSort(arr):
    n = len(arr)
    cnt = [0] * ( max(arr)+1)
    output = [0] * n
    for x in arr:
        cnt[x] += 1
    for i in range(1, len(cnt)):
        cnt[i] += cnt[i-1]
    i = n - 1
    while i >= 0:
        output[cnt[arr[i]]-1] = arr[i]
        cnt[arr[i]] -= 1
        i -= 1
    for i in range(n):
        arr[i] = output[i]

def selectionSort(arr):
    n = len(arr)
    for i in range(n-1):
        small = i
        for j in range(i+1, n):
            if arr[j] < arr[small]:
                small = j
        arr[small], arr[i] = arr[i], arr[small]

if __name__ == "__main__":
    li = [5,4,10,3,2,1]
    
    mergeSort(li, 1, 6)
    
    print(li)