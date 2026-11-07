#include<bits/stdc++.h>
using namespace std;
long long n,m,maxn;
long long a[200001],x[200001];
long long b[200001];
long long tong[200001];
bool flag=true;
void dfs(long long step,long long last){//1-5
	if(step>m){
		long long t=x[1];
		for(long long i=1;i<step;i++){
			t=t&x[i];
//			cout<<x[i]<<' ';
		}
//		cout<<endl;
		maxn=max(maxn,t);
		return;
	}
	for(long long i=last+1;i<=n;i++){
		x[step]=a[i];
		dfs(step+1,i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	for(long long i=1;i<=n;i++){
		if(a[i]>=4) flag=false;
	}
	if(n<=20){//1~5
		dfs(1,0);
		cout<<maxn;
		return 0;
	}
	if(m==n){//7
		maxn=a[1];
		for(long long i=1;i<=n;i++) maxn=maxn&a[i];
		cout<<maxn;
		return 0;
	}
	if(m==1){//6
		for(long long i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
		return 0;
	}
	if(m==2){//8-10
		for(long long i=1;i<=n;i++){
			for(long long j=1;j<=n;j++){
				if(i==j) continue;
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(flag){//16-17
		for(long long i=1;i<=n;i++){
			tong[a[i]]++;
		}
		if(tong[3]>=m){
			cout<<3;
			return 0;
		}
		if(tong[3]+tong[2]>=m){
			cout<<2;
			return 0;
		}
		if(tong[3]+tong[2]+tong[1]>=m){
			cout<<1;
			return 0;
		}
		cout<<0;
		return 0;
	}
	else{//13
		maxn=a[n];
		for(long long i=n;i>=n-m+1;i--){
			maxn=maxn&a[i];
		}
		cout<<maxn;
		return 0;
	}
	sort(a+1,a+n+1,greater<long long>());
	maxn=a[n];
	for(long long i=n;i>=n-m+1;i++){
		maxn=maxn&a[i];
	}
	sort(a+1,a+n+1);
	long long maxn1=a[1];
	for(long long i=1;i<=m;i++){
		maxn1=maxn1&a[i];
	}
	cout<<max(maxn,maxn1);
	return 0;
}
