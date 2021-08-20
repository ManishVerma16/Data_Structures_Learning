def unboundKnapsackMemoization(wt, val, cap, dp):
    ans = 0
    if cap == 0:
        dp[cap] = 0
        return dp[cap]
    elif cap in dp:
        return dp[cap]
    else:
        for i in range(len(wt)):
            if cap-wt[i] >=0:
                ans = max(ans, unboundKnapsackMemoization(wt, val, cap-wt[i], dp)+ val[i])
    dp[cap] = ans
    return dp[cap]


wt = [1, 4, 3, 5]
val = [10, 40, 50, 70]
cap = 5
dp = {}
print(unboundKnapsackMemoization(wt, val, cap, dp))
print(dp)


'''

ans = 0
    if cap == 0:
        dp[cap] = 0
        return dp[cap]
    elif cap in dp:
        return dp[cap]
    else:
        for i in range(len(wt)):
            if cap-wt[i]>=0:
                ans = max(ans, unboundKnapsackMemoization(wt, val, cap-wt[i], dp)+val[i])
    dp[cap] = ans
    return dp[cap]
'''