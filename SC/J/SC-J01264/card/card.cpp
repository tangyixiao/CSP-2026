#include<bits/stdc++.h>
using namespace std;
const int N = 500005 , M = 300005;
int n , m , a[N] , b[2 * N];
bool vis[M];
int ans[M];
int main ()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("2.txt" , "r" , stdin);
//	freopen("3.txt" , "w" , stdout);
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	for(int i = 1 ; i <= n ; i++)
	{
		int len = n - i + 1;
		for(int k = 1 ; k <= n ; k++)
			b[k] = a[i + k - 1];
		for(int k = i ; k <= n ; k++)
		{
			bool yon = 0;
			for(int j = 1 ; j <= len ; j++)
				if(b[j] == a[k])
				{
					yon = 1;
					len = j;
//					cout << '*' << len << "\n";
					break;
				}
			if(!yon)  b[++len] = a[k];
		}
		for(int i = 1 ; i <= m ; i++)
			vis[i] = 0;
		for(int i = 1 ; i <= len ; i++)
			if(!vis[b[i]])
				ans[b[i]]++ , vis[b[i]] = 1;
//		cout << len << "\n";
//		for(int i = 1 ; i <= len ; i++)
//			cout << b[i] << " "; 
//		cout << "\n";
	}
	for(int i = 1 ; i <= m ; i++)
		cout << ans[i] << " ";
}