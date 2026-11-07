#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,x,cnt,len,ans;
char c;
struct Node
{
	int l,r;
	char c;
};
Node v[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>c;
		len+=x;
		if(v[cnt].c==c)v[cnt].r+=x;
		else
		{
			++cnt;
			v[cnt].c=c;
			v[cnt].l=v[cnt-1].r+1;
			v[cnt].r=v[cnt-1].r+x;
		}
	}
//	for(int i=1;i<=cnt;i++)cout<<v[i].l<<" "<<v[i].r<<" "<<v[i].c<<'\n';
	int j=cnt;
	v[cnt+1].l=len;
	for(int i=1;i<=cnt;i++)
	{
		int l=len-v[i].l+1,r=len-v[i].r+1;
		if(r<=len/2)
		{
			r=r+(len/2-r+1)*2;
			if(l<r)swap(l,r);
			while(v[j].r>=r&&i<j)
			{
				if(i>=j)break;
				if(v[j].c!=v[i].c)
				{
					if(v[j].r>l)
					{
						ans+=min(l-r+1,l-v[j].l+1);
					}
					else if(v[j].l<r)ans+=v[j].r-r+1;
					else ans+=v[j].r-v[j].l+1;
				}
				if(v[j].l<r)break;
				j--;
			}
			break;
		}
		while(v[j].r>=r&&i<j)
		{
			if(i>=j)break;
			if(v[j].c!=v[i].c)
			{
				if(v[j].r>l)
				{
					ans+=min(l-r+1,l-v[j].l+1);
				}
				else if(v[j].l<r)ans+=v[j].r-r+1;
				else ans+=v[j].r-v[j].l+1;
			}
			if(v[j].l<r)break;
			j--;
		}
		if(i>=j)break;
	}
	cout<<ans;
	return 0;
}