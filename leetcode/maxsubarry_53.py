'''
Given an integer array nums, find the subarray with the largest sum, and return its sum.
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
'''

nums = [-2,1,-3,4,-1,2,1,-5,4]

max_so_far = 0
max_ending_here = 0
current_sum = 0
# for i in range(len(nums)):
#     for j in range(1, len(nums)):
#         current_sum += 
        # print(f"i {i}, j: {j}, nums[i]: {nums[i]}, nums[j]: {nums[j]}")

maxSub = 0
curSum = 0
for n in nums:
    if curSum < 0:
        curSum = 0
    curSum += n
    maxSub = max(maxSub, curSum)
print(maxSub)
