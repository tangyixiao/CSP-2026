#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,a[200005],ans;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n,tmpl=a[1],tmpr=a[n];
	while(l<=r){
		if(c[l]!=c[r]){
			int val=min(tmpl,tmpr);
			tmpl-=val;
			tmpr-=val;
			ans+=val;
		}else{
			int val=min(tmpl,tmpr);
			tmpl-=val;
			tmpr-=val;
		}if(tmpl==0){
			l++;
			tmpl=a[l];
		}if(tmpr==0){
			r--;
			tmpr=a[r];
		}
	}cout<<ans;
	return 0;
}