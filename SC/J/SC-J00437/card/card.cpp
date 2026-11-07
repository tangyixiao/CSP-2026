#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[500005], n, m, last[300005], ans[300005];

// RP++
int main()
{
	freopen("card.in", "r", stdin);
//	freopen("..\\cspj\\down\\card\\test.in", "r", stdin);
	freopen("card.out", "w", stdout);
//	freopen("..\\cspj\\down\\card\\card_new.out", "w", stdout);
	
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
	
	scanf("%d%d", &n, &m);
	
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i), last[arr[i]] = i;
	
	for (int i = 0; i < n; i++)
	{
		int l = i;
		while (l < n)
		{
			ans[arr[l]]++;
			l = last[arr[l]] + 1;
		}
	}
	
	for (int i = 1; i <= m; i++)
		printf("%d%s", ans[i], i == m ? "" : " ");
	
	return 0;
}