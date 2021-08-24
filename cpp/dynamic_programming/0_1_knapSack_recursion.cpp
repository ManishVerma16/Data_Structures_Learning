#include <iostream>

using namespace std;

int knapsackWithRecursion(int wt[], int val[], int cap, int pos)
{
	if (cap == 0 || pos == 0){
		return 0;
	}
	int left = 0, right = 0;
	left = knapsackWithRecursion(wt, val, cap, pos-1);
	if (cap - wt[pos-1]>=0)
		right = knapsackWithRecursion(wt, val, cap-wt[pos-1], pos-1) + val[pos-1];
	return max(left, right);
}

int main()
{
	int wt[] = {2,3,5,4};
	int val[] = {10, 8, 12, 27};
	int cap = 7;
	cout << knapsackWithRecursion(wt, val, cap, sizeof(wt)/sizeof(int)) << endl;
	return 0;
}