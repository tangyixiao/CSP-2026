#include<bits/stdc++.h>
using namespace std;
int n;
int num[200005];
char a[200005];
long long cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i]>>a[i];	
	} 
	
	int l=1,r=n;
	while(l<r)
	{
		int vis1=num[l],vis2=num[r];
		
		if(a[l]==a[r])
		{
			num[l]-=min(vis1,vis2);
			num[r]-=min(vis1,vis2);
		}
		else
		{
			cnt+=min(vis1,vis2);
			num[l]-=min(vis1,vis2);
			num[r]-=min(vis1,vis2);
		}
		
		if(num[l]==0) l++;
		if(num[r]==0) r--;
	
	}
	cout<<cnt;
	return 0;
}
