#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=200010;
ll a[MAXN];
char c[MAXN];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	ll ans=0;
	while(l<r)
	{
		ll L=a[l];
		ll R=a[r];
		if(c[l]!=c[r])
		{
			ans=min(L,R);
		}
		if(L<R);
		{
		a[r]-=L;
		l++;
		}
		 if(L>R)
		{
		a[l]-=R;
		r--;
		}
		else
		{
		l++;
		r--;
		}
	}
	cout<<ans<<'/n';
	return 0;
} 
