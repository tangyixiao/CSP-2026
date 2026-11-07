#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t[300005];
bool b=1;
vector<int>ve[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			b=0;
		}
		ve[a[i]].push_back(i);
	}
	if(b){
		for(int i=1;i<=m;i++){
			t[i]=ve[i][ve[i].size()-1];
		}
	}else if(n*n<=1e9){
		bool p[500005];
		for(int i=1;i<=n;i++){
			p[i]=0;
		}
		for(int i=1;i<=m;i++){
			int u=ve[i][ve[i].size()-1],pp=i;
			for(int j=u+1;j<=n;j++){
				p[a[j]]=1;
			}
			for(int j=u-1;j--;j>=1){
				if(p[a[j]]==1){
					break;
				}
				pp=j;
			}
			t[i]=i-pp+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<' ';
	}
	return 0;
}
