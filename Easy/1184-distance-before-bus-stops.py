# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/distance-between-bus-stops/submissions/
# https://leetcode.com/contest/weekly-contest-153/problems/distance-between-bus-stops/

class Solution:
    def distanceBetweenBusStops(self, distance: List[int], start: int, destination: int) -> int:
        start, destination = min(start, destination), max(start, destination)
        return min(sum(distance[start:destination]), sum(distance[:start] + distance[destination:]))