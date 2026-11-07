#include<bits/stdc++.h>
using namespace std;
long long a[200010];
long long n,m;
long long y,res;
long long dfs(long long cnt,long long pos,long long lp){
	if(cnt==m){
		return y;
	}
	long long ui=dfs(cnt+1,pos+1,pos);
	y=a[pos]&a[lp];
	long long oq=dfs(cnt+1,pos+1,pos);
	return max(ui,oq);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	long long res=dfs(0,2,1);
	cout<<res;
	return 0;
}
