#include<bits/stdc++.h>
using namespace std;
int n,m,r=1;
const int N=20005;
int a[N],b[N];
long long maxn=0;
void dfs(int k){
	if(k>m){
		long long sum=LONG_LONG_MAX;
		for(int j=1;j<=m;j++){
			sum=sum&b[j];
		}
		maxn=max(maxn,sum);
		return;
	}
	for(int i=r;i<=n;i++){
		b[k]=a[i];
		r=i+1;
		dfs(k+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<maxn<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
