#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	ll p1 = 1,p2 = n,ans = 0;
	while(1)
	{
//		cout<<p1<<" "<<p2<<endl;
		if(p1>=p2)break;
		if(c[p1]==c[p2])
		{
			while(c[p1]==c[p2])
			{
				int v = a[p1];
				a[p1] = (a[p1] >= a[p2] ? a[p1]-a[p2] : 0);
				a[p2] = (v >= a[p2] ? 0 : a[p2]-v);
				if(!a[p1])p1++;
				if(!a[p2])p2--;
//				p2--;
			}
		}
		if(p1==p2)break;
		ans+=(a[p1] >= a[p2] ? a[p2] : a[p1]);
//		cout<<p1<<" "<<p2<<endl;
		int bt = a[p1];
		a[p1] = (a[p1] >= a[p2] ? a[p1]-a[p2] : 0);
		a[p2] = (bt >= a[p2] ? 0 : a[p2]-bt);
//		cout<<(a[p1] >= a[p2] ? 0 : a[p2]-a[p1])<<endl;
		if(!a[p1])p1++;
		if(!a[p2])p2--;
	}
	cout<<ans;
	return 0;
}