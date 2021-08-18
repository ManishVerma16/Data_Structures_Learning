def fibonacci_memoization(num, arr):
	if num<=1:
		arr[num] = num
		return arr[num]
	elif num in arr:
		return arr[num]
	else:
		left = fibonacci_memoization(num-1, arr)
		right = fibonacci_memoization(num-2, arr)
		arr[num] = left + right
	return arr[num]


num = int(input())
arr = {}
res = fibonacci_memoization(num, arr)
print(res)
print(arr)
