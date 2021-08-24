def knapsackWithRecursion(wt, val, cap, pos, dp):
	if pos == 0 or cap == 0:
		return 0
	if dp[pos][cap] != 0:
		return dp[pos][cap]
	left = 0
	right = 0
	left = knapsackWithRecursion(wt, val, cap, pos-1, dp)
	if(cap-wt[pos-1]>=0):
		right = knapsackWithRecursion(wt, val, cap-wt[pos-1], pos-1, dp) + val[pos-1]
	dp[pos][cap] = max(left, right)
	# print(dp)
	return dp[pos][cap] 


wt = list(map(int, input().split()))
val = list(map(int, input().split()))
cap = 7
dp = [[0 for i in range(cap+1)] for j in range(len(wt)+1)]
print(knapsackWithRecursion(wt, val, cap, len(wt), dp))
print(dp)
