

nums = [2,3,1,2,4,3]
target = 7
minSub = 0
number = 1
for num in nums:
    for number in nums:
        if num + number <= target:
            minSub += 
print(minSub)