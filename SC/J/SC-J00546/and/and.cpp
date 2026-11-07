// 3.and
// Done-
#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> a,o,mx;

int one(int n){
	int cnt=0;
	while(n!=0){
		if(n%2==1){
			cnt++;
		}
		n=n>>1;
	}
	return cnt;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	a.resize(n+2);o.resize(n+2);mx.resize(m+2);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		o[i]=one(a[i]);
		/*
		if(i<=m){
			dp[m]&=a[i];
		}
		if(i<=m-1){
			dp[m-1]&=a[i];
		}
		*/
	}
	for(int k=1;k<=m;k++){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			if(a[i]>maxn){
				maxn=a[i];
				a[i]=-1;
			}
		}
		mx[k]=maxn;
	}
	int ans=mx[1];
	// for(int i=1;i<=m;i++) cout<<mx[i]<<" ";
	for(int i=2;i<=m;i++){
		ans=ans&mx[i];
	}
	printf("%d",ans);
	return 0;
}
