def targetSum(arr, target, pos, dp):
	if target == 0 or pos == 0:
		if target == 0:
			dp[pos][target] = True
			return dp[pos][target]
		dp[pos][target] = False
		return dp[pos][target]
	left = False
	right = False
	left = targetSum(arr, target, pos-1, dp)
	if target-arr[pos-1]>=0:
		right = targetSum(arr, target-arr[pos-1], pos-1, dp)
	dp[pos][target] = left or right
	return dp[pos][target]


arr = list(map(int, input().split()))
target = int(input())
dp = [[0 for i in range(target+1)] for j in range(len(arr)+1)]
print(targetSum(arr, target, len(arr), dp))
