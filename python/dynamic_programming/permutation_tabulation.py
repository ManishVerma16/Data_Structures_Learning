def permutationWithTabulation(arr, target, dp):
    for i in range(target):
        ans = 0
        if i == 0:
            dp[i] = 1
            continue
        for j in range(len(arr)):
            if i-arr[j]>=0:
                ans += dp[i-arr[j]]
        dp[i] = ans
    return dp[target-1]


arr = [1, 4, 3, 2] 
target = 5
dp = {}
print(permutationWithTabulation(arr, target+1, dp))
print(dp)
