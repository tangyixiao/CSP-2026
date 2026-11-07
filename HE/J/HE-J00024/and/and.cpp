//#include <bits/stdc++.h>
//#define endl '\n'
//#define ll long long
//using namespace std;
//int n, m;
//int a[200005];
//bool bin[200005][32];
////bool sel[200005][32];
//struct node
//{
//	int l, r;
//	int lc, rc;
//} trie[1000005];
//int tot = 0;
//void build()
//{
//	int nw = 0; 
//	for (int i = 1; i <= n; i++)
//	{
//		nw = 0;
//		for (int j = 1; j <= 31; j++)
//		{
//			if (bin[i][j] == 1)
//			{
//				if (trie[nw].r == 0)
//				{
//					trie[nw].r = ++tot;
//				}
//				trie[nw].rc++;
//				nw = trie[nw].r;
//			}
//			if (bin[i][j] == 0)
//			{
//				if (trie[nw].l == 0)
//				{
//					trie[nw].l = ++tot;
//				}
//				trie[nw].lc++;
//				nw = trie[nw].l;
//			}
//		}
//	}
//}
//pair<string, int> search(int pos)
//{
//	string fd = " ";
//	int nw = 0, num = 0;
//	for (int i = 1; i <= 31; i++)
//	{
//		cout << trie[nw].lc << ' ' << trie[nw].rc << ' ' << nw << endl;
//		if (trie[nw].rc != 0)
//		{
//			nw = trie[nw].r, fd += '1';
//			if (i == 30)
//				num = trie[nw].rc;
//		}
//		else if (trie[nw].lc != 0)
//		{
//			nw = trie[nw].l, fd += '0';
//			if (i == 30)
//				num = trie[nw].lc;
//		}
//		else
//		{
//			fd += '0';
//			nw = ++tot;
//			if (i == 30)
//				num = 0;
//		}
//	}
//	nw = 0;
//	for (int i = 1; i <= 31; i++)
//	{
//		if (trie[nw].rc != 0)
//			nw = trie[nw].r, trie[nw].rc -= num;
//		else if (trie[nw].lc != 0)
//			nw = trie[nw].l, trie[nw].lc -= num;
//		else
//			nw = ++tot;
//	}
//	return {fd, num};
//}
//signed main()
//{
////	freopen("and.in", "r", stdin);
////	freopen("and.out", "w", stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(nullptr);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		cin >> a[i];
//	sort(a + 1, a + n + 1, greater<int>()); 
//	for (int i = 1; i <= n; i++)
//	{
//		int nw = a[i];
////		cout << nw << ' ';
//		string s = " ";
//		int len = 0;
//		while (nw)
//		{
//			s += (char)((nw % 2) + '0');
//			nw >>= 1;
//			len++;
//		}
////		cout << len << ' ' << s << endl;
//		for (int ii = 31, j = 1; ii; ii--, j++)
//		{
////			cout << i << ' ' << ii << ' ' << j << ' ' << s[j] << endl;
//			if (j <= len)
//				bin[i][ii] = (s[j] == '1');
//			else
//				bin[i][ii] = 0;
//		}
////		for (int j = 1; j <= 31; j++)
////			cout << bin[i][j];
////		cout << endl;
//	}
//	build();
////	cerr << "111" << endl;
//	string ans = " ";
//	pair<string, int> k = search(31);
////	cerr << "222" << endl;
//	ans = k.first;
//	m -= k.second;
//	cout << ans << endl;
////	cout << k.second << endl;
//	cout << trie[27].lc << ' ' << trie[27].rc << endl;
//	for (int i = 30; i >= 0 && m; i--)
//	{
//		k = search(i);
//		string cur = k.first;
//		m -= k.second;
//		cerr << m << endl;
//		cout << cur << endl;
//		for (int j = 1; j <= 31; j++)
//			ans[j] &= cur[j];
//	}
////	cerr << "333" << endl;
//	ll anss = 0;
//	for (ll i = 31, pw = 1; i; i--, pw *= 2)
//	{
//		if (ans[i] == '1')
//			anss += pw;
//	}
//	cout << anss << endl;
//}
/*
4 2
3 15 12 12

5 3 
31 3 1 15 7
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, m;
#define ll long long
int a[200005];
signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1, greater<int>());
	ll ans = a[1];
	for (int i = 2; i <= m; i++)
		ans &= a[i];
	cout << ans << endl;
}
