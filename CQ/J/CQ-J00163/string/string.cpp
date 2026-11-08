#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int g=1,h=n;
	ll ans=0;
	while(g<h){
		ll x=min(a[g],a[h]);
		a[g]-=x;
		a[h]-=x;
		if(c[g]!=c[h])ans+=x;
		if(a[g]==0)g++;
		if(a[h]==0)h--;
	}
	cout<<ans;
	return 0;
}
