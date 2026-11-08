#include<bits/stdc++.h>
using namespace std;
#define int long long
namespace did
{
	const int N=2e5+5;
	int m[N];
	char ch[N];
	signed main()
	{
		//freopen("Êý¾Ý-T2","r",stdin);
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0);
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>m[i]>>ch[i];
		int l=1,r=n,p1=0,p2=0,ans=0;
		while(l<=r)
		{
			//cout<<l<<" "<<r<<" "<<m[l]<<" "<<m[r]<<" "<<p1<<" "<<p2<<" "<<ans<<"\n";
			if(m[l]-p1>m[r]-p2)
			{
				if(ch[l]!=ch[r]) ans+=(m[r]-p2);
				p1+=(m[r]-p2);
				p2=0;
				r--;	
			}
			else if(m[l]-p1<m[r]-p2)
			{
				if(ch[l]!=ch[r]) ans+=(m[l]-p1);
				p2+=(m[l]-p1);
				p1=0;
				l++;	
			}
			else
			{
				if(ch[l]!=ch[r]) ans+=(m[l]-p1);
				p1=p2=0;
				l++;
				r--;	
			}
		}
		cout<<ans;
		return 0;
	}
}
signed main()
{
	did::main();
	return 0;
} 
