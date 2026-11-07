#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],b[200005],ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>a[i]>>c;
		b[i]=c-'a'+1;
	}
	int l=0,r=n+1,cnt1=0,cnt2=0;
	while(l+1<r){
		if(cnt1<cnt2){
			if(b[l+1]!=b[r]){
				ans+=min(cnt2-cnt1,a[l+1]);
			} 
			cnt1+=a[++l];
		}
		else{
			if(b[l]!=b[r-1]){
				ans+=min(cnt1-cnt2,a[r-1]);
			} 
			cnt2+=a[--r];
		}
	}
	cout<<ans;
	return 0;
} 