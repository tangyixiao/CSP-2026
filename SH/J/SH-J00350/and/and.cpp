#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],mans;
void dfs(int x,int c,int na){
	if(c==m){
		mans=max(mans,na);
		return;
	}
	if(n-x+c<m){
		return;
	}
	for(int i=x+1;i<=n;i++){
		dfs(i,c+1,(na&a[i]));
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	bool fl=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i]+1;
		while(true){
			if(fl==0){
				break;
			}
			if(x==1){
				break;
			}
			if(x%2!=0){
				fl=0;
			}
			x/=2;
		}
	}
	if(fl){
		sort(a+1,a+1+n);
		cout<<a[3]<<endl;
		return 0;
	}
	if(m==1){
		cout<<*max_element(a+1,a+1+n);
		return 0;
	}
	if(m==n){
		int an=a[1];
		for(int i=2;i<=n;i++){
			an&=a[i];
		}
		cout<<an<<endl;
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<mans<<endl;
	return 0;
}
