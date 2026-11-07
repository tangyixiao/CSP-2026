#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[2000005],b[2000005];
char c[2000005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n,ans=0,sum=0;
	while(l!=r){
		sum++;
		int k=min(a[l],a[r]);
		a[l]-=k;
		a[r]-=k;
		if(c[l]!=c[r]){
			ans+=k;
		}
		if(a[l]==0&&a[r]==0){
			l++;
			r--;
		}
		else if(a[l]==0){
			l++;
		}
		else{
			r--;
		}
	}
	cout<<ans;
	return 0;
}