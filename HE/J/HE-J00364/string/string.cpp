#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+100;

int n,a[N],ans;
char c[N];

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	int l=1,r=n;
	
	while(l<r){
		if(a[l]>a[r]){
			a[l]-=a[r];
			if(c[l]!=c[r])ans+=a[r];
			r--;
		}
		else if(a[l]<a[r]){
			a[r]-=a[l];
			if(c[l]!=c[r])ans+=a[l];
			l++;
		}
		else{
			if(c[l]!=c[r])ans+=a[l];
			l++,r--;
		}
	}
	
	cout<<ans<<'\n';
	return 0;
}
