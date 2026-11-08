#include<bits/stdc++.h>
#define N 200005
typedef long long ll;
using namespace std;
ll n,sum,ans,id;
struct Node
{
	char c;
	ll num;
}arr[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	id=n-1; 
	for(int i=0;i<n;i++)cin>>arr[i].num>>arr[i].c;
	for(int i=0;i<n;i++)
	{	
		if(arr[i].num==0)break;
		for(int j=id;j>=i;j--)
		{
			if(arr[j].num==0)continue;
			if(arr[j].c!=arr[i].c)
			{	
				ans+=min(arr[j].num,arr[i].num);
				if(arr[j].num>=arr[i].num)
				{
					arr[j].num-=arr[i].num;
					arr[i].num=0;
					id=j;
					break;
				}
				else
				{
					arr[i].num-=arr[j].num;
					arr[j].num=0;
					continue;
				}
			}
			else
			{
				if(arr[j].num>=arr[i].num)
				{
					arr[j].num-=arr[i].num;
					arr[i].num=0;
					id=j;
					break;
				}
				else
				{
					arr[i].num-=arr[j].num;
					arr[j].num=0;
					continue;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
