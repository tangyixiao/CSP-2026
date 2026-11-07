#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100050005],v[100050005];
int n,m,ma=0;
void dfs(int deep,int yi){
	if(deep==m){
		ma=max(ma,yi);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(v[i]) continue;
		v[i]=1;
		dfs(deep+1,yi&a[i]);
		v[i]=0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==n){
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			ma=ma&x;
		}
		cout<<ma;
		return 0;
	}
	if(n<=20){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			v[i]=1;
			dfs(1,a[i]);
			v[i]=0;
		}
		cout<<ma;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[x]++;
		ma=max(ma,x);
	}
	for(int i=ma;i>=1;i++){
		if(a[i]>=m){
			ma=i;
			break;
		}
	}
	//lllllllll
	return 0;
} 