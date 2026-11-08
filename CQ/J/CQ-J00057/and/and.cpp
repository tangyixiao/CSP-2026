#include<bits/stdc++.h>
using namespace std;
int a[20005];
int d(int k,int ans,int m,int n)
{
	int maxn=ans,linshi=maxn;
	int maxnn=0;
	for(int i=k+1;i<n;i++)
	{
		//cout<<i<<endl;
		//cout<<ans<<" "<<a[i]<<" "<<(ans&a[i])<<" "<<maxn<<endl;
		if((ans & a[i])>maxn)
		{
			maxn=(ans&a[i]);
			//cout<<ans<<" "<<a[i]<<" "<<(ans&a[i])<<" "<<"maxn:"<<maxn<<endl;
		}
		else if((ans & a[i])>maxnn)
		{
			maxnn=(ans&a[i]);
			//cout<<ans<<" "<<a[i]<<" "<<(ans&a[i])<<" "<<"maxnn:"<<maxnn<<endl;
		}
		//cout<<"maxnn "<<maxnn<<endl;
	}
	//cout<<"下一个："<<maxnn<<endl;
	if(m-1==0)
	{
		if(maxn!=linshi)
			return maxn;
		else if(maxnn==0)
			return ans;
		//cout<<"最终："<<maxnn<<endl;
		return maxnn;
	}
	else if(maxn>linshi)
		return d(k+1,maxn,m-1,n);
	else if(maxnn==0)
		return d(k+1,ans,m-1,n);
	return d(k+1,maxnn,m-1,n);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m,maxn=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int te=d(i+1,a[i],m,n);
		if(te>maxn&&te!=a[i])
			maxn=te;
	}
	cout<<maxn;
	return 0;
}
