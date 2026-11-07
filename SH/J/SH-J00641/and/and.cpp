#include<bits/stdc++.h>
using namespace std;
vector<int> mx_num(200000,0);
bool ord[200000][32]={0};
void get_ord(int x,int xb)
{
	for(int i=0;i<=30&&x;i++)
	{
		if(x&1)
		{
			ord[xb][i]=1;
			mx_num[i]++;
		}
		x>>=1;
		//cerr<<x<<" ";
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
		get_ord(nums[i],i);
		//cout<<'\n';
	}
	vector<int> vis(n,1);
	for(int i=30;i>=0;i--)
	{
		if(mx_num[i]<m) continue;
		//cerr<<mx_num[i]<<'\n';
		for(int j=0;j<n;j++)
		{
			if(!vis[j]) continue;
			if(!ord[j][i])
			{
				//cerr<<j<<" ";
				vis[j]=0;
				for(int k=0;k<32;k++)
				{
					if(ord[j][k]) mx_num[k]--;
				}
				//cerr<<j<<" ";
			}
		}
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(vis[i])
		{
			ans&=nums[i];
			//cout<<nums[i]<<'\n';
		}
	}
	cout<<ans;
	return 0;
}
