#include <bits/stdc++.h>
#define ll long long
using namespace std;
//priority_queue<ll> pq;
//priority_queue<ll,vector<ll>,greater<ll> > pq; //Ð¡¸ù¶Ñ
const int N=2e5+5;
ll n,a[N],ans;
char ch[N];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{cin>>a[i]>>ch[i];}
	ll l=1,r=n;
	while(l<r)
	{
		ll mam=max(a[l],a[r]),mim=min(a[l],a[r]);
		if(ch[l]!=ch[r])
		{ans+=mim;}
		if(a[l]>a[r])
			{a[l]-=a[r];r--;}
		else if(a[l]<a[r])
			{a[r]-=a[l];l++;}
		else if(a[l]==a[r])
			{l++;r--;}
	}
	cout<<ans;
	return 0;
}/*

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b






*/