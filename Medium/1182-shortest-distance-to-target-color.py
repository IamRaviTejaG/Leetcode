# Author: Ravi Teja Gannavarapu
#
# Difficulty: Medium
#
# https://leetcode.com/contest/biweekly-contest-8/problems/shortest-distance-to-target-color/
#
# QUESTION:
# You are given an array colors, in which there are three colors: 1, 2 and 3.
# You are also given some queries. Each query consists of two integers i and c,
# return the shortest distance between the given index i and the target color c.
# If there is no solution return -1.
#
# Example 1:
# Input: colors = [1,1,2,1,3,2,2,3,3], queries = [[1,3],[2,2],[6,1]]
# Output: [3,0,3]
# Explanation: 
# The nearest 3 from index 1 is at index 4 (3 steps away).
# The nearest 2 from index 2 is at index 2 itself (0 steps away).
# The nearest 1 from index 6 is at index 3 (3 steps away).
#
# Example 2:
# Input: colors = [1,2], queries = [[0,3]]
# Output: [-1]
# Explanation: There is no 3 in the array.
#
#
# SOLUTION EXPLANATION:
# First, push all the indices of occurrences of 1, 2 & 3 in a list. Since we do this
# linearly, we have an already sorted list available. So, for each query, we find the
# nearest index containing the number using binary search (O(logn)). Note that if we
# use linear search instead which is O(n), the solution will TLE.

def closest(arr, n, target):
    if (target <= arr[0]):
        return arr[0]
    if (target >= arr[n - 1]):
        return arr[n - 1]
    i = 0
    j = n
    mid = 0
    while (i < j):
        mid = (i+j)//2
        if (arr[mid] == target):
            return arr[mid]
        if (target < arr[mid]):
            if (mid > 0 and target > arr[mid - 1]):
                return retClosest(arr[mid - 1], arr[mid], target)
            j = mid
        else:
            if (mid < n - 1 and target < arr[mid + 1]):
                return retClosest(arr[mid], arr[mid + 1], target)
            i = mid + 1
    return arr[mid]

def retClosest(val1, val2, target):
    if (target - val1 >= val2 - target):
        return val2
    else:
        return val1

class Solution:
    def shortestDistanceColor(self, colors: List[int], queries: List[List[int]]) -> List[int]:
        ans = []
        a = {i: [] for i in range(1, 4)}
        for i in range(len(colors)):
            a[colors[i]].append(i)
        for i in queries:
            b = i[0]
            c = i[1]
            if (len(a[c]) == 0):
                ans.append(-1)
            else:
                nearest = closest(a[c], len(a[c]), b)
                ans.append(abs(nearest - b))
        return ans