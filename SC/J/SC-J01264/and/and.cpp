#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int n , m , a[N];
int cnt[N][40] , tot[40];
void count(int x , int pos)
{
	int i = 0;
	while(x)
	{
		if(x & 1)  cnt[pos][i]++ , tot[i]++;
		x >>= 1 , i++;
	}
}
int main ()
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("2.txt" , "r" , stdin);
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i] , count(a[i] , i);
//	for(int i = 0 ; i < 30 ; i++)
//		cout << tot[i] << " ";
//	cout << "\n";
	int pos = 29;
	while(tot[pos] == 0)  pos--;
	int ans = 0;
	for(int i = pos ; i >= 0 ; i--)
	{
//		cout << i << " " << ans << "\n";
		if(tot[i] < m)  
		{
			ans <<= 1;
			continue;
		}
//		else if(tot[i] == m)
//		{
//			int ans = (1ll << 30) - 1;
//			for(int j = 1 ; j <= n ; j++)
//				if(cnt[j][i])  ans &= a[j];
//			cout << ans;
//			return 0;
//		}
		ans <<= 1 , ans++;
		for(int j = 1 ; j <= n ; j++)
			if(cnt[j][i] == 0 && a[j] != 0)
			{
				for(int k = i - 1 ; k >= 0 ; k--)
					tot[k] -= cnt[j][k];
				a[j] = 0;
			}
	}
	cout << ans;
}