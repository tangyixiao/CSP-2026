#include <bits/stdc++.h>
#define lin long long
#define endl "\n"
#define hash ZhaoAk
#define y1 qht_yjx
#define maxn 500005
#define I ios :: sync_with_stdio (0);
#define AK cin.tie (0);
#define CSP cout.tie (0);
#define rep(i ,l ,r) for (int i = l ;i <= r ;i ++)
#define per(i ,l ,r) for (int i = r ;i >= l ;i --)
#define vt vector
#define pb push_back
#define pii pair <int ,int>


using namespace std;


int n ,m ,a[maxn] ,las[maxn] ,key[maxn] ,f[maxn];


vt <int> vec[maxn];


void adde (int u ,int v)
{
	vec[u].pb (v);
	vec[v].pb (u);
	return ;
}


void DFS (int u ,int fa)
{
//	cout << u << " " << key[u] << endl;
	f[u] = key[u];
	
	rep (i ,0 ,(int) (vec[u].size ()) - 1)
	{
		int v = vec[u][i];
		if (v == fa)
			continue ;
		DFS (v ,u);
		f[u] += f[v];
	}
	
	return ;
}


signed main ()
{
	I AK CSP
	
	freopen ("card.in" ,"r" ,stdin);
	freopen ("card.out" ,"w" ,stdout);
	
	cin >> n >> m;
	rep (i ,1 ,n)
		cin >> a[i] ,las[a[i]] = i ,key[a[i]] ++;
	
	rep (i ,1 ,n - 1)
		if (las[a[i]] == i)
			adde (a[i] ,a[i + 1]);
	
	DFS (a[n] ,- 1);

	rep (i ,1 ,m)
	{
		cout << f[i];
		if (i != m)
			cout << " ";
	}

	return !!!!! ("ShZhao" && "SHzhao");
}
