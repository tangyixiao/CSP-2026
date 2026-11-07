#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,l,r,ld,rd;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	l=1;
	r=n;
	ld=a[l];
	rd=a[r];
	while(l<r)
	{
		if(ld==rd)
		{
			if(c[l]!=c[r])
				ans=ans+ld;
			l++;
			r--;
			ld=a[l];
			rd=a[r];
		}
		else if(ld<rd)
		{
			if(c[l]!=c[r])
				ans=ans+ld;
			rd=rd-ld;
			l++;
			ld=a[l];
		}
		else if(ld>rd)
		{
			if(c[l]!=c[r])
				ans=ans+rd;
			ld=ld-rd;
			r--;
			rd=a[r];
		}
	}
	cout<<ans;
	return 0;
}