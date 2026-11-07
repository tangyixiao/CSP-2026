#include <bits/stdc++.h>
using namespace std;
struct Str
{
	long long l,st,en;
	char a;
}s[200005];
long long n,len,ans=0,mid,pre=1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> s[i].l>>s[i].a;
		s[i].st = pre;
		pre += s[i].l;
		s[i].en = pre;
		len += s[i].l;
	}
	pre = 1;
	long long j = len,i=1;
	while (i != j)
	{
		char now1 = s[pre].a,now2 = s[n].a;
		if (now1 != now2)
		{
			ans ++;
		}
		i++;
		j--;
		if (i > s[pre].en)
			pre++;
		if (j < s[n].st)
			n--;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
