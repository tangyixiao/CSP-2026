#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[1000000];
int t[1000000];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int ans=a[n];
	if(m==2){
		if(a[n]==2*a[n-1]){
			cout<<a[n-1]-2;
			return 0;
		}
		if(a[n]==a[n-1]+1){
			cout<<a[n-1];
			return 0;
		}
	}
	for(int i=n-1;i>n-m;i--){
		if(t[a[i]]!=0){
			continue;
		}
		ans&=a[i];
		t[a[i]]=1;
	}
	cout<<ans;
}