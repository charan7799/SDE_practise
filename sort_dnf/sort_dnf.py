from os import *
from sys import *
from collections import *
from math import *

from sys import stdin,setrecursionlimit
setrecursionlimit(10**7)

def sort012(arr, n) :

	# write your code here
    # don't return anything
    low, mid, high = 0,0,n-1
    for i in range(n):
        while(mid <= high):
            if arr[mid]==0:
                arr[low], arr[mid] = arr[mid], arr[low]
                low+=1
                mid+=1
            elif arr[mid]==2:
                arr[high], arr[mid] = arr[mid], arr[high]
                high-=1
            else:
                mid+=1


#taking inpit using fast I/O
# def takeInput() :
# 	n = int(input().strip())

# 	if n == 0 :
# 		return list(), 0

# 	arr = list(map(int, stdin.readline().strip().split(" ")))

# 	return arr, n



def printAnswer(arr, n) :
    
    for i in range(n) :
        
        print(arr[i],end=" ")
        
    print()
    
#main

t = [1,1,1,2,0,0,2,0,1]
arr, n= t, len(t)
sort012(arr, n)
printAnswer(arr, n)
