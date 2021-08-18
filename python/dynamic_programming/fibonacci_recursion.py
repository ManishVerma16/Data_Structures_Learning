def fibonacci_recursion(num):
	if num<=1:
		return num
	left = fibonacci_recursion(num-1)
	right = fibonacci_recursion(num-2)

	return left+right


num = int(input())
print(fibonacci_recursion(num))