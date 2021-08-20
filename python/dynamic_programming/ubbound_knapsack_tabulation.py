def unboundKnapsackTabulation(wt, val, cap, dp):
    for i in range(cap):
        ans = 0
        if i == 0:
            dp[i] = i
            continue
        elif i in dp:
            return dp[i]
        else:
            for j in range(len(wt)):
                if i-wt[j]>=0:
                    ans = max(ans, dp[i-wt[j]]+val[j])
            dp[i] = ans
    return dp[cap-1]

wt = [1, 4, 3, 5]
val = [10, 40, 50, 70]
cap = 5
dp = {}
print(unboundKnapsackTabulation(wt, val, cap+1, dp))
print(dp)


'''
for i in range(cap):
        ans = 0
        if i == 0:
            dp[i] = 0
            continue
        if i in dp:
            return dp[i]
        else:
            for j in range(len(wt)):
                if i - wt[j]>=0:
                    ans = max(ans, dp[i-wt[j]]+val[j])
            dp[i] = ans
    return dp[cap-1]
'''