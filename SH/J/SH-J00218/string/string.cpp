#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int li_i=1;li_i<=n;li_i++)
	{
		cin>>a[li_i]>>b[li_i];
	}
	int l=1,r=n;
	long long li_ans=0;
	while(l<r)
	{
		if(b[l]!=b[r])
		{
			li_ans+=min(a[l],a[r]);
		}
		if(a[l]<a[r])
		{
			a[r]-=a[l];
			l++;
		}
		else if(a[l]>a[r])
		{
			a[l]-=a[r];
			r--;
		}
		else
		{
			l++;
			r--;
		}
	}
	cout<<li_ans;
	return 0;
}
