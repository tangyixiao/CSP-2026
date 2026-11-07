#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	int ans=0;
	for(int i=1,j=n;i<j;){
		int t=min(a[i],a[j]);
		if(c[i]!=c[j])ans+=t;
		a[i]-=t;a[j]-=t;
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	}
	cout<<ans;
}