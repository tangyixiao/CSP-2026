#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int a[N];
int last[M];
int ans[M];
int cnt[N];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	for(int i=n;i>=1;i--)
	{
		if(!last[a[i]]) last[a[i]]=i;
		cnt[last[a[i]]]++;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(cnt[i])
		{
			ans[a[i]]=cnt[i];
			cnt[last[a[i+1]]]+=cnt[i];
		}
	}

	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	
	return 0;
}
//I do not kown why a OIer who takes part in CSP-J/S the second time should join CSP-J.
//
//8:30 begin
//8:39 solve T1
//8:51 solve T2
//9:10 solve T3
//9:35 solve T4 & test big examples
//9:40 sleep
//11:20 write this text
//12:00 end
//
//Wish I will not guafeng or I will become a jocker.
//CSP-S rp++
