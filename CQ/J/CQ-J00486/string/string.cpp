#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[200005];
ll b[200005];
char c1[200005];
char c2[200005];
void f(int l,int r){
	ll t=min(a[l],b[r]);
	a[l]-=t;
	b[r]-=t;
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c1[i];
		b[n-i+1]=a[i];
		c2[n-i+1]=c1[i];
	}
	int l=1,r=1;
	ll s=0;
	while(l<=n&&r<=n){
		if(c1[l]!=c2[r])s+=min(a[l],b[r]);
		f(l,r);
		if(!a[l])l++;
		if(!b[r])r++;
	}
	cout<<s/2;
	return 0;
}

