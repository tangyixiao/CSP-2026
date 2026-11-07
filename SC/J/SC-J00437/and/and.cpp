#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[200005], n, m, bitn = 29, bitcnt[30];

// RP++
// maybe not final
int main()
{
	freopen("and.in", "r", stdin);
//	freopen("..\\cspj\\down\\and\\test.in", "r", stdin);
	freopen("and.out", "w", stdout);
//	freopen("..\\cspj\\down\\and\\and_new.out", "w", stdout);
	
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
	
	scanf("%d%d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
		for (int j = 0; j < 30; j++)
			bitcnt[j] += (arr[i] >> j) & 1;
	}
	
	int x = n, res = 0;
	while (x > 0)
	{
		while (bitcnt[bitn] < m && bitn >= 0)
			bitn--;
		
		if (bitn < 0)
			break;
		
		sort(arr, arr + x, [=](int a, int b)
		{
			return (a & ((1 << bitn + 1) - 1)) > (b & ((1 << bitn + 1) - 1));
		});
		
		res += 1 << bitn;
		
		while (((arr[x - 1] >> bitn) & 1) == 0 && x > 0)
		{
			for (int j = 0; j < 30; j++)
				bitcnt[j] -= (arr[x - 1] >> j) & 1;
			x--; 
		}
//		cout << x << ' ';
		bitn--;
	}
	
	printf("%d", res);
	
	return 0;
}