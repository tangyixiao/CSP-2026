#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int n;
long long a[N];
char c[N];  
bool vis[30];
void solve()
{
	string s;
	for(int i = 1 ; i <= n ; i++)
		s = s + c[i];
	s = ' ' + s;
	int ans = 0;
	for(int i = 1 ; i <= n / 2 ; i++)
		if(s[i] != s[n - i + 1])  ans++;
	cout << ans;
	exit(0);
}
int main ()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("1.txt" , "r" , stdin);
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i] >> c[i] , a[i] += a[i - 1];
	
	bool yon = 1;
	for(int i = 1 ; i <= n ; i++)
		if(a[i] != a[i - 1] + 1)
			yon = 0;
	if(yon) solve();
	
	long long mid = a[n];
	if(mid % 2 == 0)
	{
		bool yon = 0;
		for(int i = 1 ; i <= n ; i++)
		{
			if(a[i] == mid / 2)
			{
				yon = 1;
				break;
			} 
		}
//		cout << yon;
		if(!yon)
		{
			for(int i = n ; i ; i--)
			{
//				cout << i << "\n";
				if(a[i - 1] < mid / 2)
				{
					a[i + 1] = a[i];
					c[i + 1] = c[i];
					a[i] = mid / 2;
					break;
				}
				a[i + 1] = a[i] , c[i + 1] = c[i];
			}
			++n;
		}
	}
//	for(int i = 1 ; i <= n ; i++)
//		cout << a[i] << " " << c[i] << "\n"; 
	long long lstr = a[n] , lst = n;
	long long ans = 0;
//	cout << mid << "\n";
	for(int i = 1 ; i <= n && a[i] * 2 <= mid ; i++)
	{
		long long nowr = mid - a[i];
//		cout << nowr << " " << mid << " " << a[i] << "\n";
		if(c[i] != c[lst + 1])  ans += lstr - a[lst];
		for(; a[lst] >= nowr && lst ; lst--)
			if(c[lst] != c[i])
			{
				if(a[lst - 1] >= nowr)  ans += a[lst] - a[lst - 1];
				else  ans += a[lst] - nowr; 
			}
		lstr = nowr;
//		cout << ans << " " << nowr << " " << lst << "\n";
	}
	cout << ans;
}