def permutationWithRecursion(arr, target):
    ans = 0
    if target == 0:
        return 1
    else:
        for i in range(len(arr)):
            if target-arr[i]>=0:
                ans += permutationWithRecursion(arr, target-arr[i])
    return ans


arr = [1, 4, 3, 2] 
# list(map(int, input().split()))
target = 5
print(permutationWithRecursion(arr, target))
