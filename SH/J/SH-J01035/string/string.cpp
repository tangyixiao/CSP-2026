#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[214514],b[214514],c[214514],d[214514],e[214514];
set<int> st;
signed main()
{

	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		char s;
		cin>>a[i]>>s;
		b[i]=(int)s;
	}
	int k=0;
    for(int i=1;i<=n;i++)
    {
    	k+=a[i];
    	c[i]=k;
    	st.insert(k);
	}
	for(int i=1;i<n;i++)
    {
    	k-=a[i];
    	st.insert(k);
	}
	k=0;
	for(int i=n;i>=1;i--)
	{
		k+=a[i];
		d[n-i+1]=k;
		e[i]=b[n-i+1];
	}
	//for(int i=1;i<=n;i++)cout<<d[i]<<" "<<e[i]<<"\n";
	int lst=0,x=0,y=0,ans=0;
	for(auto i:st)
	{
		while(c[x]<i)x++;
		while(d[y]<i)y++;
		if(b[x]!=e[y])ans+=i-lst;
		//cout<<lst<<"->"<<i<<","<<b[x]<<" "<<e[y]<<" "<<ans<<"\n";
		//cout<<c[x]<<" "<<d[y]<<" "<<x<<" "<<y<<"\n";
		lst=i;
	}
	cout<<ans/2;
}
//feel tricked yeah 
//sticking on it for nearly 50 min
