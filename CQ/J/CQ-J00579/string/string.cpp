#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FN "string"
int n,l,r,a[200005];
char c[200005];
ll ans;
int main(){
	freopen(FN".in","r",stdin);
	freopen(FN".out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l=1;r=n;
	while(l<r){
		if(a[l]<a[r]){
			if(c[l]!=c[r])ans+=a[l];
			a[r]-=a[l];l++;
		}else if(a[l]>a[r]){
			if(c[l]!=c[r])ans+=a[r];
			a[l]-=a[r];r--;
		}else if(a[l]==a[r]){
			if(c[l]!=c[r])ans+=a[l];
			l++;r--;
		}
	}
	cout<<ans;
	return 0;
}
//5min
