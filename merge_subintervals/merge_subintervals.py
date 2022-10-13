
from os import *
from sys import *
from collections import *
from math import *

from sys import stdin,setrecursionlimit

class Solution:
    def __init__ (self, start, end):
        self.start = start
        self.end = end

def mergeIntervals(intervals):
    # Write your code here.
    if len(intervals) == 0:
        print("no intervals were given")
        return []
    merged = [intervals[0]]
    k=0
    for i in range(1, len(intervals)):
        if merged[k].end >= intervals[i].start:
            merged[k].end = max(merged[k].end, intervals[i].end)
        else:
            merged.append(intervals[i])
            k+=1
    return merged
    
# n = int(input())
# arr1 = list(map(int, stdin.readline().strip().split(" ")))
# arr2 = list(map(int, stdin.readline().strip().split(" ")))
# arr1.sort()
# arr2.sort()
arr = [[1, 3], [2, 4], [2, 6], [8, 9], [8, 10], [9, 11], [15, 18], [16, 17]]
# arr = []
intervals = []
for i in range(len(arr)):
    a = Solution(arr[i][0], arr[i][1])
    intervals.append(a)

res = mergeIntervals(intervals)

for i in range(len(res)):
    print(res[i].start, res[i].end)


