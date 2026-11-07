#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n,a[N],id,p;
long long sum,pre,ans;
char b[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	sum=(sum+1)/2;
	id=n;
	for(int i=1;i<=n;i++)
	{	pre+=a[i];
		p=a[i];
		if(pre>=sum)
		{
			for(int j=i+1;j<=id;j++)
			{
				if(b[i]!=b[j]) ans+=a[j];
			}
			break;
		}
		while(p)
		{
			//cout<<id<<""<<p<<"\n";
			if(p>a[id])
			{
				p-=a[id];
				if(b[id]!=b[i]) ans+=a[id];
				a[id]=0;
				id--;
			}else{
				if(b[id]!=b[i]) ans+=p;
				a[id]-=p;
				p=0;
			}
		}
		//cout<<ans<<" "<<id<<"\n";
	}
	cout<<ans;
	return 0;
}