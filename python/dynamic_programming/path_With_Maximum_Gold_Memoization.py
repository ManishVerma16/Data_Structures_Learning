def maximumGoldUsingRecursion(arr, row, col, dp):
	if row <0 or col >= len(arr) or row >= len(arr):
		return 0
		# dp[row][col] = 0
		# return dp[row][col]

	if dp[row][col] != -1:
		return dp[row][col]

	a = maximumGoldUsingRecursion(arr, row-1, col+1, dp)
	b = maximumGoldUsingRecursion(arr, row, col+1, dp)
	c = maximumGoldUsingRecursion(arr, row+1, col+1, dp)
	dp[row][col] = max(a, b, c) + arr[row][col]
	return dp[row][col]



arr = [[1,3,1,5], [2,2,4,1], [5,0,2,3], [0,6,1,2]]
ans = 0
dp = [[-1 for col in range(len(arr))] for row in range(len(arr))]
for i in range(len(arr)):
	ans = max(ans, maximumGoldUsingRecursion(arr, i, 0, dp))

print(ans)
print(dp)