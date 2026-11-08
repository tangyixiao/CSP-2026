#include <cstddef>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

static size_t n;
static size_t m;
static vector<size_t> a, b;

#define ELEMENT_NOT_FOUND ((size_t)-1)

static size_t isElementExist(const vector<size_t> &arr, size_t valToFind)
{
	for (size_t i = 0; i < arr.size(); i++)
		if (arr[i] == valToFind)
			return i;
	return ELEMENT_NOT_FOUND;
}

static void sumCards(const vector<size_t> &arr, vector<size_t> &cards)
{
	for (size_t i = 0; i < arr.size(); i++)
		++cards[arr[i] - 1];
}

int main(void)
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	vector<size_t> remaining(m);
	for (size_t i = 0; i < n; i++)
	{
		size_t x;
		cin >> x;
		a.push_back(x);
	}
	for (size_t i = 0; i < n; i++)
	{
		while (!b.empty())
			b.pop_back();
		for (size_t j = i; j < n; j++)
		{
			size_t foundPos = isElementExist(b, a[j]);
			if (foundPos == ELEMENT_NOT_FOUND)
				b.push_back(a[j]);
			else
				while (b.size() > foundPos)
					b.pop_back();
		}
		sumCards(b, remaining);
	}
	for (size_t i = 0; i < m; i++)
		cout << remaining[i] << ' ';
	cout << endl;
	return 0;
}
