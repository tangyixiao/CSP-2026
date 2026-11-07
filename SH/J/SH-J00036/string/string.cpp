#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200001],r,ans,s[100001],cnt;
char c[200001];
signed main(){
 	ios::sync_with_stdio(0);
 	cin.tie(0);
 	freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
 	cin>>n;
 	for(int i=1;i<=n;i++){
 		cin>>a[i]>>c[i];
 		cnt+=a[i];
	}
	if(cnt<=100000){
		int tot=0;
		for(int i=1;i<=n;i++){
	 		cin>>a[i]>>c[i];
	 		while(a[i]--){
	 			s[++tot]=c[i];
			}
		}
		for(int i=1;i<=cnt/2;i++){
			if(s[i]!=s[cnt-i+1]) ans++;
		}
		cout<<ans;
	}
	else{
		r=n;
		for(int i=1;i<=n;i++){
			while(a[i]>0&&r>i){
				int k=min(a[i],a[r]);
				a[i]-=k;
				a[r]-=k;
				if(c[i]!=c[r]) ans+=k;
				if(a[r]==0) r--;
			}
		}
		cout<<ans;
	}
 	return 0;
}
