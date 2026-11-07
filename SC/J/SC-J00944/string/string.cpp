#include<bits/stdc++.h>
#define int long long
using namespace std;
int mp[26],n,ans,a[200005];
char c[200005];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<n;i++){
		int j=n;
		while(a[j]<a[i]){
			if(a[j]>a[i])break;
			if(c[i]!=c[j])ans+=a[j];
			a[i]-=a[j];
			n--;j=n;
		}
		a[j]-=a[i];
		if(c[i]!=c[j])ans+=a[i];
	}
	cout<<ans;
}