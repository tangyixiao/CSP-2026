#include<bits/stdc++.h>
using namespace std;
char a[500005];
long long ans,n,cnt[500005],l=1,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>cnt[i];
		cin>>a[i];
	}
	r=n;
	while(l<=r-1){
		if(a[l]==a[r]){
			int t=min(cnt[l],cnt[r]);
			cnt[l]-=t;
			cnt[r]-=t;
			if(cnt[l]==0){
				l++;
			}
			if(cnt[r]==0){
				r--;
			}
		}
		else {
			int t=min(cnt[l],cnt[r]);
			ans+=t;
			cnt[l]-=t;
			cnt[r]-=t;
			if(cnt[l]==0){
				l++;
			}
			if(cnt[r]==0){
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}