#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005];
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=a[1];
	if(m==1){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			maxn=max(a[i],maxn);
		}
		cout<<maxn;
		return 0;
	}
	else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(m==2){
		int maxn=-1;
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=a[i]&a[j];
				maxn=max(maxn,ans);
			}
		}
		cout<<maxn;
		return 0;
	}
	else{
		sort(a+1,a+n+1,cmp);
		for(int i=2;i<=m;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}
	return 0;
}
