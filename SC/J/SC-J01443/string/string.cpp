#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int a[N],ans;
char ch[N];
signed main()
{
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>ch[i];
	int l=1,r=n;
	while(l<r)
	{
		if(a[l]>a[r])
		{
			if(ch[l]!=ch[r]) ans+=a[r];
			a[l]-=a[r];
			r--;
		}
		else if(a[l]==a[r])
		{
			if(ch[l]!=ch[r]) ans+=a[r];
			l++,r--;
		}
		else
		{
			if(ch[l]!=ch[r]) ans+=a[l];
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans;
	return 0;
}