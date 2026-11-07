#include<bits/stdc++.h>
using namespace std;
unsigned long long p,o;
unsigned long long maxn=0;
unsigned long long a[200005];
unsigned long long ans[200005];
bool choose[200005];
void dfs(unsigned long long now){
	if(now>o){
		unsigned long long sss;
		sss=ans[1];
		for(unsigned long long i=2;i<=o;i++){
			sss=sss&ans[i];
		}
		maxn=max(maxn,sss);
	}
	for(unsigned long long i=1;i<=p;i++){
		if(!choose[i]){
			choose[i]=1;
			ans[now]=a[i];
			dfs(now+1);
			choose[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>p>>o;
	for(int i=1;i<=p;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
