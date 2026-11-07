#include<bits/stdc++.h>
using namespace std;
const int max_n=2e5+10;
#define int long long
int n,m;
int a[max_n];
int ans;
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=1;i<m;i++){
		a[i]&=a[i+1];
		ans=max(ans,a[i]);
	}
	cout<<ans;
	return 0;
}
