#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
char c[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	for(int l=1,r=n;l<r;){
		int x=min(a[l],a[r]);
		if(c[l]!=c[r])
			ans+=x;
		a[l]-=x,a[r]-=x;
		if(!a[l])l++;
		if(!a[r])r--;
	}
	cout<<ans;
	return 0;
}
