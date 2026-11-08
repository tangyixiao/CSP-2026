#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],S=INT_MIN;
void dfs(long long t,long long s,long long k){
	if(k==m){
		S=max(S,s);
		return;
	}
	for(int i=t+1;i<=n;i++){
		dfs(i,s&=a[i],k+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	if(n==m){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			a[1]=a[1]&a[i];
		}
		printf("%.lld",a[1]);
		return 0;
	}
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
		dfs(i,a[i],1);
	printf("%.lld",S);
	return 0;
}
//Trick||Treat!
