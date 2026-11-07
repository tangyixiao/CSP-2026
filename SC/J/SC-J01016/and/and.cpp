#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull n,m,maxx;
const int N=2e5+10;
long long a[N];
ull biao[35];
void dfs(ull x,ull id,ull step){
	if(step==m){
		maxx=max(maxx,x);
		return ;
	}
	if(id>n){
		return ;
	}
	dfs(x&a[id],id+1,step+1);
	dfs(x,id+1,step);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ull x=1;
	
	for(int i=1;i<=30;i++){
		x*=2;
		biao[i]=x-1;
	}
	cin>>n>>m;
	bool flag=1;

	bool bb=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1]+1){
			bb=0;
		}

		bool f=0;
		for(int j=1;j<=30;j++){
			if(a[i]==biao[j]){
				f=1;
			}
		}
		if(f==0){
			flag=0;
		}
	}
	if(flag==1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	dfs(x-1,1,0);
	cout<<maxx;
	return 0;
}