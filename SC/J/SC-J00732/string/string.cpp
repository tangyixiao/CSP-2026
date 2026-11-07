#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,a[N],idx=0,ans;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	int ai;char ci;
	for(int i=1;i<=n;i++){
		cin>>ai>>ci;
		if(ci==c[idx])a[idx]+=ai;
		else c[++idx]=ci,a[idx]=ai;
	}
	int l=1,r=idx;
	while(l<=r){
		if(a[l]>=a[r]){
			if(c[l]!=c[r])ans+=a[r];
			a[l]-=a[r];r--;
		}else{
			if(c[l]!=c[r])ans+=a[l];
			a[r]-=a[l];l++;
		}
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}cout<<ans;
	return 0;
}
