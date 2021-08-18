def fibonacci_tabulation(num, arr):
	for i in range(0, num+1):
		if i<=1:
			arr.insert(i, i)
		else:
			arr.insert(i, arr[i-1]+arr[i-2])
	return arr[num]



num = int(input())
arr = []
res = fibonacci_tabulation(num, arr)
print(res)
print(arr)
