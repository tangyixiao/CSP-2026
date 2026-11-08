#include<bits/stdc++.h>
using namespace std;
int arr[500001];
int cnt[300001];
int brr[500001];
int top;
unordered_map<int,int> up;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>arr[i];
	if(n==m)
	{
		for(int i=1;i<=m;i++)cout<<n<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		top=0;
		memset(brr,0,sizeof brr);
		up.clear();
		for(int j=i;j<=n;j++)
		{
			if(up.count(arr[j]))
			{
				for(int i=up[arr[j]];i<=top;i++)brr[i]=0;
				top=up[arr[j]];
				brr[top]=arr[j];
				up[arr[j]]=top;
			}
			else
			{
				top++;
				brr[top]=arr[j];
				up[arr[j]]=top;
			}
		}
		for(int i=1;i<=top;i++)cnt[brr[i]]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}
