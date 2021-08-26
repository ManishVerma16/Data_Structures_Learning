def combinationWithTabulation(arr, target):
	dp = [0 for i in range(target+1)]
	dp[0] = 1
	for i in range(len(arr)):
		for j in range(target+1):
			if j-arr[i]>=0:
				dp[j] = dp[j] + dp[j-arr[i]]
	return dp[target]


arr = list(map(int, input().split()))
target = int(input())
print(combinationWithTabulation(arr, target))