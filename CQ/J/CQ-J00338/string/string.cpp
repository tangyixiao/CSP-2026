#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,ans;
int a[N];
char c[N]; 

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int y=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		y+=a[i];
	}
	int l=1,r=n,x=0,k1=0,k2=0,yy=y/2;
//	cout<<y<<" ";
	while(x*2<=y && l<r)
	{
		int u=a[l]-k1,v=a[r]-k2;
//		cout<<u<<" "<<v<<" "<<k1<<" "<<k2<<" "<<x<<" "<<l<<" "<<r<<endl;
		if(u<v)
		{
			k2+=u; k1=0; 
			if(c[l]!=c[r])
			{
				ans+=min(u,yy-x);
			}
			x+=a[l];
			l++;
		}
		else if(u>v)
		{
			k1+=v; k2=0; 
			if(c[l]!=c[r])
			{
				ans+=min(v,yy-x);
			}
//			x+=a[r];
			r--;
		}
		else
		{
			k1=0; k2=0;
			if(c[l]!=c[r]) 
			{
				ans+=min(u,yy-x);
			}
			x+=a[l];
			l++; r--;
		}
//		cout<<k1<<" "<<k2<<" "<<x<<" "<<l<<" "<<r<<" "<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
/*
6
8 a
1 c
10 a
13 b
11 a
1 b
19 3 3 19 12
aaaaaaaa c aaa aaaaaaa bbb bbb bbbbbbb aaaaaaaaaaa b
aaaaaaaa a 
*/
