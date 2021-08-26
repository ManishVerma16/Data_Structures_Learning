def targetSum(arr, target, pos):
	if target == 0 or pos == 0:
		if target == 0:
			return True
		return False
	left = False
	right = False
	left = targetSum(arr, target, pos-1)
	if target-arr[pos-1]>=0:
		right = targetSum(arr, target-arr[pos-1], pos-1)

	return left or right


arr = list(map(int, input().split()))
target = int(input())
print(targetSum(arr, target, len(arr)))
