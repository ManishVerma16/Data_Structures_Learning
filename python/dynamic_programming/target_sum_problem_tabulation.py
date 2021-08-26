def targetSumWithTabulation(arr, target, dp):
	for i in range(len(arr)+1):
		for j in range(target+1):
			if i == 0 or j == 0:
				if j == 0:
					dp[i][j] = True
				else:
					dp[i][j] = False
				continue 
			left = False
			right = False
			left = dp[i-1][j]
			if j-arr[i-1]>=0:
				right = dp[i-1][j-arr[i]]
			dp[i][j] = left or right
			return dp[i-1][j-1]


arr = list(map(int, input().split()))
target = int(input())
dp = [[0 for i in range(target+1)] for j in range(len(arr)+1)]
print(targetSumWithTabulation(arr, target, dp))
print(dp)
