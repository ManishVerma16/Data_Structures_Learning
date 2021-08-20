def unboundKnapsackRecursion(wt, val, cap):
    ans = 0
    if cap == 0:
        return 0
    else:
        for i in range(len(wt)):
            if cap-wt[i]>=0:
                ans = max(ans, unboundKnapsackRecursion(wt, val, cap-wt[i])+val[i])
    return ans


wt = [1, 4, 3, 5]
val = [10, 40, 50, 70]
cap = 5
print(unboundKnapsackRecursion(wt, val, cap))