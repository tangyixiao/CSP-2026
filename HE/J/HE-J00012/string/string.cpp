#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=6e5+10;
int a[N];char c[N];
int n,ans=0;
int solve(){
	int l=1,r=n,ans=0;
	while(l<=r){
		if(c[l]!=c[r])ans+=min(a[l],a[r]);
		if(a[l]>a[r]){
			a[l]-=a[r];
			r--;
		}else if(a[l]<a[r]){
			a[r]-=a[l];
			l++;
		}else{
			l++;r--;
		}
	}
	return ans;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	cout<<solve()<<'\n';
	return 0;
}
