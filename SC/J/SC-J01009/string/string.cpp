#include<bits/stdc++.h>
using namespace std;
struct A{
	char c;
	int leng;
}a[200010];
long long ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].leng>>a[i].c;
	int l=1,r=n;
	long long le=a[l].leng,ri=a[r].leng;
	while(l<r)
	{
		if(a[l].c!=a[r].c)
		{
			if(a[l].leng>a[r].leng)
			{
				ans+=a[r].leng;
				a[l].leng-=a[r].leng;
				r--;
			}
			else if(a[l].leng<a[r].leng)
			{
				ans+=a[l].leng;
				a[r].leng-=a[l].leng;
				l++;
			}
			else//==
			{
				ans+=a[l].leng;
				l++;
				r--;
			}
		}
		else
		{
			if(a[l].leng>a[r].leng)
			{
				a[l].leng-=a[r].leng;
				r--;
			}
			else if(a[l].leng<a[r].leng)
			{
				a[r].leng-=a[l].leng;
				l++;
			}
			else//==
			{
				l++;
				r--;
			}
		}
		//cout<<l<<endl;
	}
	cout<<ans;
	return 0;
}