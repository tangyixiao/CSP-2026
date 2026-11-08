#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
struct node{
	ll cnt;
	char ch;
}ls[200005];
ll ans=0;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	ll cnt;
	char ch;
	for(int i=1;i<=n;i++)
	{
		cin>>cnt>>ch;
		ls[i]={cnt,ch};
	}
	int i=1,j=n;
	while(i<j)
	{
		if(ls[i].ch!=ls[j].ch)
		{
			if(ls[i].cnt>ls[j].cnt)
			{
				ans+=ls[j].cnt;
				ls[i].cnt-=ls[j].cnt;
				ls[j].cnt=0;
				j--;
			}
			else if(ls[i].cnt<ls[j].cnt)
			{
				ans+=ls[i].cnt;
				ls[j].cnt-=ls[i].cnt;
				ls[i].cnt=0;
				i++;
			}
			else
			{
				ans+=ls[i].cnt;
				ls[i].cnt=0;
				ls[j].cnt=0;
				i++;
				j--;
			}
		}
		else
		{
			if(ls[i].cnt>ls[j].cnt)
			{
				ls[i].cnt-=ls[j].cnt;
				ls[j].cnt=0;
				j--;
			}
			else if(ls[i].cnt<ls[j].cnt)
			{
				ls[j].cnt-=ls[i].cnt;
				ls[i].cnt=0;
				i++;
			}
			else
			{
				ls[i].cnt=0;
				ls[j].cnt=0;
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}

