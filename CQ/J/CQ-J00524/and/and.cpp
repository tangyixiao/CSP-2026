#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],v[200005],mx=-1;
void dfs(int t){
	if(t==m+1){
		long long s=2e31-1;
		for(int i=1;i<=m;i++){
			s=(s&a[v[i]]);
			cout<<s<<' ';
		}
		cout<<endl;
		mx=max(mx,s);
	    return;
	}
	for(int i=1;i<=n;i++){
		if(i>v[t-1]){
			v[t]=i;
			dfs(t+1);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long s=2e31-1;
	for(int i=1;i<=n;i++)cin>>a[i];
	n=min(n,max((long long)32,m));
	dfs(1);
	cout<<mx;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
