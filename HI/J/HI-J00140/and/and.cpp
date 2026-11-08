#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

static size_t n, m;
static vector<int> a;

static void getBitAndMaxValueImpl(const vector<int> &arr, vector<int> &arr2, size_t andNumbers, size_t recurseDeepth, size_t currentIndex, int &numRet)
{
	for (size_t i = currentIndex; i < arr.size() - andNumbers + recurseDeepth; i++)
	{
		if (recurseDeepth >= andNumbers)
		{
			int sum = arr[i];
			for (size_t j = 0; j < andNumbers - 1; j++)
				sum &= arr2[j];
			numRet = max(numRet, sum);
		}
		else
		{
			arr2[recurseDeepth - 1] = arr[i];
			getBitAndMaxValueImpl(arr, arr2, andNumbers, recurseDeepth + 1, i + 1, numRet);
		}
	}
}

static int getBitAndMaxValue(const vector<int> &arr, size_t andNumbers)
{
	int numRet = 0;
	vector<int> arr2(andNumbers);
	getBitAndMaxValueImpl(arr, arr2, andNumbers, 1, 0, numRet);
	return numRet;
}

int main(void)
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (size_t i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	cout << getBitAndMaxValue(a, m) << endl;
	return 0;
}
