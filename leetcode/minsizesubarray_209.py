'''
Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
'''

class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        minSub = 0
        for n in nums:
            if minSub >= target:
                return minSub
            minSub += n
        return minSub


def main():
    nums = [2,3,1,2,4,3]
    target = 7
    solution = Solution()
    minSub = solution.minSubArrayLen(target, nums)
    print(minSub)

if __name__ == '__main__':
    main()
