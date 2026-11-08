#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans,l,r;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	ans=0,l=1,r=n;
	while(l!=r){
		int mn=min(a[l],a[r]);
		if(c[l]==c[r]){
			a[l]-=mn,a[r]-=mn;
			if(a[l]==0) l++;
			else r--;
		}else{
			a[l]-=mn,a[r]-=mn,ans+=mn;
			if(a[l]==0) l++;
			else r--;
		}
	}cout<<ans;
	return 0;
}
