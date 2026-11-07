#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
struct node
{
	int pos,id;
	char c;
	bool operator < (const node k) const
	{
		return pos < k.pos;
	}
}e[2 * N];
int n,m,a[N],sum,cnt,b[N * 2],ans;
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i ++) cin >> a[i] >> c[i],e[++ m].pos = sum,e[m].id = 1,e[m].c = c[i],sum += a[i];
	e[++ m].id = 1;e[m].pos = sum;
	e[++ m].id = 2;e[m].pos = sum;
	for(int i = n;i >= 1;i --)
	{
		e[++ m].pos = cnt;
		e[m].id = 2;
		e[m].c = c[i];
		cnt += a[i];
	}
	sort(e + 1,e + m + 1);
	char c1 = '0',c2 = '0';
	for(int i = 1;i <= m;i ++)
	{
		if(e[i].pos > sum / 2) break;
		if(c1 != '0' && c2 != '0' && c1 != c2) ans += e[i].pos - e[i - 1].pos;
		if(e[i].id == 1) c1 = e[i].c;
		else c2 = e[i].c;
	}
	cout << ans;
	return 0;
}
