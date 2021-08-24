def knapsackWithTabulation(wt, val, cap, dp):
	for i in range(len(wt)+1):
		for j in range(cap+1):
			if i == 0 or j == 0:
				dp[i][j] = 0
				continue
			if dp[i][j] != 0:
				return dp[i][j]
			left = 0
			right = 0
			left = dp[i-1][j]
			if(j-wt[i-1]>=0):
				right = dp[i-1][j-wt[i-1]] + val[i-1]
			dp[i][j] = max(left, right)
	return dp[i][j] 


wt = list(map(int, input().split()))
val = list(map(int, input().split()))
cap = 7
dp = [[0 for i in range(cap+1)] for j in range(len(wt)+1)]
print(knapsackWithTabulation(wt, val, cap, dp))
print(dp)
