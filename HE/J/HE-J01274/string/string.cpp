#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 2e5+10;
ll n,ans=1;
ll a[MAXN],sum;
string c[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
	}
	ll r=1,l=n;
	while(ans)
	{
		
		if(c[r]!=c[l])
		{
			if(a[r]>a[l])
			{
				a[r]-=a[l];
				sum+=a[l];
				l--;
			}
			else if(a[r]<a[l])
			{
				a[l]-=a[r];
				sum+=a[r];
				r++;
			}
			else
			{
				sum+=a[l];
				r++;
				l--;
			}
		}else{
			l--;
		}
		if(l<=r){
			ans=0;
		}
	}
	cout << sum;
	return 0;
} 
