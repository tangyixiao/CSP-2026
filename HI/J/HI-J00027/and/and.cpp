#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],an,o,ma,q,t[200005],tt[200005];
void dfs(long long x,long long y,long long z){
	if(x==n+1){
		if(y==m)an=max(an,z);
		return;
	}
	if(y+1<=m){
		if(y==0)dfs(x+1,y+1,a[x]);
		else dfs(x+1,y+1,z&a[x]);
	}
	dfs(x+1,y,z); 
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	if(m==1)cout <<ma;
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				an=max(an,a[i]&a[j]);
			}
		}
		cout <<an;
	}else if(m==n){
		o=a[1];
		for(int i=2;i<=n;i++){
			o&=a[i];
		}
		cout <<o;
	}else if(m==n-1){
		for(int i=1;i<=n;i++){
			if(i==1){
				t[i]=a[i];
				tt[n-i+1]=a[n-i+1];
			}else{
				t[i]=t[i-1]&a[i];
				tt[n-i+1]=tt[n-i+2]&a[n-i+1];
			}
		}
		for(int i=1;i<=n;i++){
			an=max(an,t[i-1]&tt[i+1]);
		}
		cout <<an;
	}else{
		dfs(1,0,0);
		cout <<an;
	}
	return 0;
}
