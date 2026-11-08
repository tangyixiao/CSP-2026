#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2e5 + 7;
struct node
{
	int num;
	char c;
}l[MAXN];
ll sum[MAXN], cnt;
int ls[MAXN], cur = 0;
char cs[MAXN];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> l[i].num >> l[i].c;
		sum[i] = sum[i - 1] + l[i].num; 
	}
	ll mid = sum[n] / 2;
	if(sum[n] & 1) mid ++;
	for(int i = 1; i <= n; i ++)
	{
		if((sum[i - 1] <= mid && sum[i] <= mid) || sum[i - 1] > mid)
		{
			ls[++cur] = l[i].num;
			cs[cur] = l[i].c;
			continue;
		}
		ls[++cur] = mid - sum[i - 1];
		cs[cur] = l[i].c;
		int ans = l[i].num - ls[cur];
		ls[++cur] = ans;
		cs[cur] = l[i].c;
		if(sum[n] & 1) ls[cur - 1] --;
	}
	int l1 = 1, r1 = cur;
	while(l1 < r1)
	{
		if(ls[l1] <= ls[r1])
		{
			if(cs[l1] != cs[r1]) cnt += ls[l1];
			ls[r1] -= ls[l1];
			l1 ++;
			if(ls[r1] == 0) r1 --;
		}
		else
		{
			if(cs[l1] != cs[r1]) cnt += ls[r1];
			ls[l1] -= ls[r1];
			r1 --;
			if(ls[l1] == 0) l1 ++;
		}
	}
	cout << cnt << endl;
	return 0;
}
