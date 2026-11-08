#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
int a1[200009],a2[200009];
char c1[200009],c2[200009];
int ans=0;

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a1[i]>>c1[i];
		a2[n-i+1]=a1[i];
		c2[n-i+1]=c1[i];
	}
	
	int fir=1,sec=1;
	
	while(fir<=n&&sec<=n)
	{
		if(c1[fir]==c2[sec])
		{
			int delta=min(a1[fir],a2[sec]);
			a1[fir]-=delta;
			a2[sec]-=delta;
		}
		else if(c1[fir]!=c2[sec])
		{
			int delta=min(a1[fir],a2[sec]);
			a1[fir]-=delta;
			a2[sec]-=delta;
			ans+=delta;
		}
		
		if(a1[fir]==0)fir++;
		if(a2[sec]==0)sec++;
	}
	
	cout<<ans/2;
	
	return 0;
}
