#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define hash ZhaoAk
#define y1 qht_yjx
#define maxn 200005
#define I ios :: sync_with_stdio (0);
#define AK cin.tie (0);
#define CSP cout.tie (0);
#define rep(i ,l ,r) for (int i = l ;i <= r ;i ++)
#define per(i ,l ,r) for (int i = r ;i >= l ;i --)
#define vt vector
#define pii pair <int ,int>


using namespace std;


int n ,a[maxn];


char ch[maxn];


signed main ()
{
	I AK CSP
	
	freopen ("string.in" ,"r" ,stdin);
	freopen ("string.out" ,"w" ,stdout);

	cin >> n;
	rep (i ,1 ,n)
		cin >> a[i] >> ch[i];
	
	int ans = 0 ,l = 1 ,r = n;
	while (l < r)
	{
		int lsc = min (a[l] ,a[r]);
		ans += (int) (ch[l] != ch[r]) * lsc;
		a[l] -= lsc ,a[r] -= lsc;
		while (a[l] == 0)
			l ++;
		while (a[r] == 0)
			r --;
	}
	
	cout << ans << endl;

	return !!!!! ("ShZhao" && "SHzhao");
}
