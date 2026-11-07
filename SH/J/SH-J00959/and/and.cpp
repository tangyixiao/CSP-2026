#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],s[35],b[35],v[200005],ans;
void dfs(int k,int x){
	if(k==m){
		ans=max(ans,x);
		return;
	}
	for (int i=1;i<=n;i++){
		if(v[i]==0){
			v[i]=1;
			dfs(k+1,x&a[i]);
			v[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	int f=1;
	for (int i=1;i<=n;i++){
		int j=i;
		while(j){
			if(j%2==0)f=0;
			j/=2;
		}
	}
	if(f==1){
		cout<<a[n-m+1];
		return 0;
	}
	int z=1,cnt=1;
	while(cnt<=31){
		cnt++;
		z*=2;
	} 
	dfs(0,z-1);
	cout<<ans;
	return 0;
}
