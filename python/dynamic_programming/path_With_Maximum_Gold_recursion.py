def maximumGoldUsingRecursion(arr, row, col):
	if row <0 or col >= len(arr) or row >= len(arr):
		return 0

	a = maximumGoldUsingRecursion(arr, row-1, col+1)
	b = maximumGoldUsingRecursion(arr, row, col+1)
	c = maximumGoldUsingRecursion(arr, row+1, col+1)
	return max(a, b, c) + arr[row][col]



arr = [[1,3,1,5], [2,2,4,1], [5,0,2,3], [0,6,1,2]]
ans = 0
for i in range(len(arr)):
	ans = max(ans, maximumGoldUsingRecursion(arr, i, 0))
print(ans)