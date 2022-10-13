from math import *

def ninjaAndSortedArrays(arr1,arr2,m,n):
    # Write your code here.
    gap = ceil(float(m+n)/2)
    while gap>0:
        i=0
        j = gap
        while j<(m+n):
            if j<m and arr1[i]>arr1[j]:
                arr1[i], arr1[j] = arr1[j], arr1[i]
            elif j>=m and i<m and arr1[i]> arr2[j-m]:
                arr1[i], arr2[j-m] = arr2[j-m], arr1[i]
            elif j>=m and i>=m and arr2[i-m]> arr2[j-m]:
                arr2[i-m], arr2[j-m] = arr2[j-m], arr2[i-m]
            i+=1
            j+=1
        if gap==1:
            gap=0
        else:
            gap = ceil(float(gap)/2)
            
    for i in range(m, m+n):
        arr1[i] = arr2[i-m]
    return arr1

arr1 = [1,2,5,0,0]
arr2 = [3,4]

print(ninjaAndSortedArrays(arr1, arr2, 3, 2))