def permutationWithMemoization(arr, target, dp):
    ans = 0
    if target == 0:
        dp[target] = 1
        return dp[target]
    elif target in dp:
        return dp[target]
    else:
        for i in range(len(arr)):
            if target-arr[i]>=0:
                ans += permutationWithMemoization(arr, target-arr[i], dp)
    dp[target]= ans
    return dp[target]


arr = [1, 4, 3, 2] 
# list(map(int, input().split()))
target = 5
dp = {}
print(permutationWithMemoization(arr, target, dp))
print(dp)
