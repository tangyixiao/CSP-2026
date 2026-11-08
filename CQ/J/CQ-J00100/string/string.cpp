#include<bits/stdc++.h>
using namespace std;

#define int long long

const int N=2e5+5;

int n;
int cnt[N];
char ch[N];
int l,r;
int ans;



signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>cnt[i]>>ch[i];
	}
	
	l=1,r=n;
	
	while(l<r)
	{
		if(cnt[r]>cnt[l])
		{
			if(ch[l]!=ch[r]) ans+=cnt[l];
			
			cnt[r]-=cnt[l++];
		}
		
		else if(cnt[l]>cnt[r])
		{
			if(ch[l]!=ch[r]) ans+=cnt[r];
			
			cnt[l]-=cnt[r--];
		}
		
		else
		{
			if(ch[l]!=ch[r]) ans+=cnt[l];
			
			l++,r--;
		}
	}
	
	cout<<ans;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
