#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct node
{
	int a;
	long long l,r;
	char c;
} a[N],s[N];
int n;
long long cur=0,ans=0;
long long f(long long l1,long long r1,long long l2,long long r2)
{
	if (l1>r2||r1<l2)
		return 0;
	return min(min(r1-l2+1,r1-l2+1),min(r1-l1+1,r2-l2+1));
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].c;
		cur+=a[i].a;
	}
	long long tcur=0;
	int tn=0;
	for (int i=1;i<=n;i++)
	{
		if (tcur+1<=(cur+1)/2&&(cur+1)/2<=tcur+a[i].a)
		{
			if (cur&1)
			{
				s[++tn].l=tcur+1;
				s[tn].r=(cur+1)/2-1;
				s[tn].c=a[i].c;
				s[++tn].l=(cur+1)/2+1;
				s[tn].r=tcur+a[i].a;
				s[tn].c=a[i].c;
			}
			else
			{
				s[++tn].l=tcur+1;
				s[tn].r=(cur+1)/2;
				s[tn].c=a[i].c;
				s[++tn].l=(cur+1)/2+1;
				s[tn].r=tcur+a[i].a;
				s[tn].c=a[i].c;
			}
		}
		else
		{
			s[++tn].l=tcur+1;
			s[tn].r=tcur+a[i].a;
			s[tn].c=a[i].c;
		}
		tcur+=a[i].a;
	}
	n=tn;
	int i=1,j=n;
	ans=cur/2;
	while (s[i].r<=cur/2&&s[j].l>=cur/2+1)
	{
		if (s[i].c==s[j].c)
		{
			ans-=f(s[i].l,s[i].r,cur-s[j].r+1,cur-s[j].l+1);
		}
		if (s[i].r<cur-s[j].l+1)
			i++;
		else
			j--;
	}
	cout<<ans;
	return 0;
}