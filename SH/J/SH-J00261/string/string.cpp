#include <bits/stdc++.h>
using namespace std;
long long n,len;
struct stru
{
	long long num;
	char a;
}str[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(long long i = 1; i <= n; i++)
	{
		cin >> str[i].num >> str[i].a;
		len += str[i].num;
	}
	long long l = 1,r = len,il = 1,ir = n;
	long long ll = 1,rr = 1;
	long long temp = min(str[il].num - ll,str[ir].num - rr);
	long long ans = 0;
	while(l < r || il < ir)
	{
//		temp = min(str[il].num - ll,str[ir].num - rr);
		l += temp;
		r -= temp;
		ll += temp;
		rr += temp;
		
		if(str[il].a != str[ir].a)
		{
			ans += temp;
		}
		if(ll >= str[il].num)
		{
			il++;
			ll -= str[il].num;
		}
		if(rr >= str[ir].num)
		{
			ir--;
			rr -= str[ir].num;
		}
		temp = min(str[il].num - ll,str[ir].num - rr);
	}
	cout << ans;
	return 0;
}
