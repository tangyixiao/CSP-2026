#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10; 
int a[N];
char c[N];
long long pre[N],len=0,ans=0;
 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
		len+=a[i];
		pre[i]=pre[i-1]+a[i];
	}
	for(int i=1;i<=len/2;i++)
	{
		int k=len-i+1;
		char x,y;
		for(int j=0;j<n;j++)
		{
			if(i>pre[j]&&i<=pre[j+1])
				x=c[j+1];
			if(k>pre[j]&&k<=pre[j+1])
				y=c[j+1];
		}
		if(x!=y)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;	
}