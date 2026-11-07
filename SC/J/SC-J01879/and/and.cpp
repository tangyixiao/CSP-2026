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


int n ,m ,a[maxn] ,f[45][maxn] ,res[maxn] ,cur[maxn];


bool ck (int pos)
{
//	cout << "-----" << pos << "-----" << endl;
	rep (i ,1 ,n)
		cur[i] = (int) (res[i] && f[pos][i]);
//	rep (i ,1 ,n)
//		cout << i << " " << res[i] << " " << f[pos][i] << " " << cur[i] << endl;
//	cout << endl;
	int cnt = 0;
	rep (i ,1 ,n)
		cnt += (int) (cur[i] != 0);
//	cout << cnt << endl;
	if (cnt >= m)
		rep (i ,1 ,n)
			res[i] = cur[i];
	return (cnt >= m);
}


signed main ()
{
	I AK CSP
	
	freopen ("and.in" ,"r" ,stdin);
	freopen ("and.out" ,"w" ,stdout);
	
	cin >> n >> m;
	rep (i ,1 ,n)
		cin >> a[i] ,res[i] = 1;
	
	rep (i ,0 ,40)
		rep (j ,1 ,n)
			f[i][j] = (a[j] >> i) & 1;
	
//	rep (i ,0 ,5)
//	{
//		rep (j ,1 ,n)
//			cout << f[i][j] << " ";
//		cout << endl;
//	}
	
	int ans = 0;
	per (i ,0 ,40)
		if (ck (i))
			ans |= (1ll << i);
	
	cout << ans << endl;
//	rep (i ,1 ,n)
//		cout << res[i] << " ";
//	cout << endl;

	return !!!!! ("ShZhao" && "SHzhao");
}
