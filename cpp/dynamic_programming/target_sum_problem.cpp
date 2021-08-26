#include <iostream>
using namespace std;

int targetSum(int arr[], int target, int pos){
	if (target == 0 || pos == 0){
		if (target == 0) return 1;
		return 0;
	}
	int left = 0, right = 0;
	left = targetSum(arr, target, pos-1);
	if (target-arr[pos-1]>=0){
		right = targetSum(arr, target-arr[pos-1], pos-1);
	}
	return left || right;
}

int main()
{
	int arr[] = {1, 6, 11, 6};
	int target = 12;
	int pos = sizeof(arr)/sizeof(int);
	cout << targetSum(arr, target, pos) << endl;
	return 0;
}