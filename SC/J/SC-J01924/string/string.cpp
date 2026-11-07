#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N=212345;
ll n,a[N];char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	ll l=1,r=n,ans=0;
	while(l<r){
		int tmp=min(a[l],a[r]);
		if(c[l]!=c[r]){
			ans+=tmp;
		}
		a[l]-=tmp;
		a[r]-=tmp;
		if(!a[l])l++;
		if(!a[r])r--;
	}
	cout<<ans;
	return 0;
}