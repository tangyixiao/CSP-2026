#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,ans;
int a[200005];

void f(int t,int sum,int c){
	if(c==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=t;i<=n;i++){
		f(i+1,sum&a[i],c+1);
	}
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	
	int sum=(1>>31)-1;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum&=a[i];
	}
	
	if(m==n){
		cout<<sum;
		return 0;
	}
	
	if(n<=2005){
		f(1,(1<<31)-1,0);
		cout<<ans;
	}
	else{
		sort(a+1,a+n+1);
		int anss=(1<<31)-1;
		for(int i=n;i>=n-m+1;i--){
			anss&=a[i];
		}
		cout<<anss;
	}
	
	
	return 0;
}