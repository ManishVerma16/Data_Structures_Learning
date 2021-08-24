def knapsackWithRecursion(wt, val, cap, pos):
	if pos == 0 or cap == 0:
		return 0
	left = 0
	right = 0
	left = knapsackWithRecursion(wt, val, cap, pos-1)
	if(cap-wt[pos-1]>=0):
		right = knapsackWithRecursion(wt, val, cap-wt[pos-1], pos-1) + val[pos-1]
	return max(left, right)


wt = list(map(int, input().split()))
val = list(map(int, input().split()))
cap = 7
print(knapsackWithRecursion(wt, val, cap, len(wt)))