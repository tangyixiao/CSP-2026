#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=200005;
ll be[N],en[N],ca[N];
char zm[N];
ll summ=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>en[i]>>zm[i];
		be[i]=en[i-1]+1;
		en[i]+=be[i]-1;
	}
	ll t=1,w=n,ans=0;
	
	for(ll i=1;i<=((en[n]+1)/2);i++)
	{
		ll j=(en[n]+1)-i;
		if(i>en[t])	t++;
		if(j<be[w])	w--;
		if(zm[t]!=zm[w])
		{
			ll cat=en[t]-i,caw=j-be[w];
			summ++;
			if(cat>=caw)
			{
				if((i+caw)>((en[n]+1)/2))
				{
					summ+=((en[n]+1)/2)-i;
					cout<<summ;
					return 0;
				}
				i+=caw;
				j-=caw;
				summ+=caw;
			}else
			{
				if(en[t]>((en[n]+1)/2))
				{
					summ+=((en[n]+1)/2)-i;
					cout<<summ;
					return 0;
				}
				i+=cat;
				j-=cat;
				summ+=cat;
			}
		}
		
	}
	cout<<summ;
	return 0;
}

