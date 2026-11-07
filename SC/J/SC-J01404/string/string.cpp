#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[200000+10];
char s[200000+10];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>s[i];
	int l=1,r=n,ans=0;
	while(l<r){
		if(s[l]!=s[r]){
			ans+=min(a[l],a[r]);
		}
		int cnt=min(a[l],a[r]);
		a[l]-=cnt;
		a[r]-=cnt;
		if(a[l]==0) l++;
		if(a[r]==0) r--;
	}
	cout<<ans;
	return 0;
}
