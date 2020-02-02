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
##############################################

def merge(arr, lo, mid, hi):
    L = arr[:mid]
    R = arr[mid:]
    
    n1 = len(L)
    n2 = len(R)
    
    i = j = 0
    k = lo
    
    # putting the small to the left and big to the right
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            k += 1
            i += 1
        else:
            arr[k] = R[j]
            k += 1
            j += 1
    # dealing with the leftover
    while i < n1:
        arr[k] = L[i]
        k += 1
        i += 1
    while j < n2:
        arr[k] = R[j]
        k += 1
        j += 1


def mergeSort(arr, lo, hi):
    if lo < hi:
        mid = int((lo + hi)/2)
        mergeSort(arr, lo, mid)
        mergeSort(arr, mid+1, hi)
        merge(arr, lo, mid, hi)

def mergeSort(arr, n):
    mergeSort(arr, 0, n-1)

##############################################

if __name__ == "__main__":
    li = [5,4,10,3,2,1]
    
    mergeSort(li, 6)
    
    print(li)