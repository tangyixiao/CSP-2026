#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		map<int,int> t;
		int y[50005];
		long x=0;
		for(int j=i;j<=n;j++){
			x++;
			if(t[a[j]]==0){
				t[a[j]]=x;
				y[x]=a[j];
			}
			else{
				x=t[a[j]];
			}
		}
		int yy[300005];
		for(int j=1;j<=x;j++){
			yy[y[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(yy[j]==1){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}