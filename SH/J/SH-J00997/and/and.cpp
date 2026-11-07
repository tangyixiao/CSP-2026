#include<bits/stdc++.h>
using namespace std;
long long n,m,x,d[200067];
bool f[200067];
void dfs(long long a,long long i){
	if(i==m){
//		cout<<x<<endl;
		x=max(x,a);
		return;
	}
	for(int j=1;j<=n;j++){
		if(f[j]==0){
			f[j]=1;
			dfs(a&d[j],i+1);
			f[j]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>d[i];
	for(int i=1;i<=n;i++){
		f[i]=1;
		dfs(d[i],1);
		f[i]=0;
	}
	cout<<x;
	return 0;
}
