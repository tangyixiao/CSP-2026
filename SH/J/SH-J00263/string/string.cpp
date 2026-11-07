#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200010],ans;
char c[200010];
struct node
{
	ll a;
	char c;
};
stack<node> l,r;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin >> n;
	long long len = 0;
	for (ll i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		len += a[i];
	}
	ll mid = 0;
	long long sum = 0;
	while(sum < (len + 1) / 2)
		mid++,sum += a[mid];
	ll ls = 0,rs = 0;
	if(len & 1)
		a[mid]--,len--,sum--;
	for (ll i = 1;i < mid;i++)
		l.push({a[i],c[i]}),ls += a[i];
	for (ll i = n;i > mid;i--)	
		r.push({a[i],c[i]}),rs += a[i];
	if(sum == len / 2)
		l.push({a[mid],c[mid]});
	else
		l.push({len / 2 - ls,c[mid]}),r.push({len / 2 - rs,c[mid]});
//	cout << mid << " " << len << endl;
//	while(l.size())
//	{
//		cout << "[" << l.top().a << "," << l.top().c << "] ";
//		l.pop();
//	}
//	cout << endl;
//	while(r.size())
//	{
//		cout << "[" << r.top().a << "," << r.top().c << "] ";
//		r.pop();
//	}
	while(l.size() && r.size())
	{
		node lx = l.top(),rx = r.top();
		l.pop(),r.pop();
		if(lx.c == rx.c)
		{
			ll a1 = lx.a,a2 = rx.a;
			lx.a = max(a1 - a2,0ll);
			rx.a = max(a2 - a1,0ll);
		}
		else
		{
			ll a1 = lx.a,a2 = rx.a;
			ans += min(a1,a2);
			lx.a = max(a1 - a2,0ll);
			rx.a = max(a2 - a1,0ll);
		}
		if(lx.a) l.push(lx);
		if(rx.a) r.push(rx);
	}
	cout << ans;
	return 0;
}
