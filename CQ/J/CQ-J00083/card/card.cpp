#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
vector<int>c[M];
int a[N],d[M],tot[M],ans[M];
void fl(int x,int y){
	for(int i=x;i<=y;i++)	ans[a[i]]--,d[a[i]]++;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[a[i]].push_back(i);
		ans[a[i]]+=i+1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(c[a[j]].size()-tot[a[j]]-d[a[j]]>1){
				fl(c[a[j]][tot[a[j]]+d[a[j]]],c[a[j]][tot[a[j]]+d[a[j]]+1]-1);
				j=c[a[j]][tot[a[j]]+d[a[j]]]-1;
			}
		}
		for(int j=1;j<=m;j++)	d[j]=0;
		tot[a[i]]++;
	}
	for(int i=1;i<=m;i++)	cout<<ans[i]<<' ';
	return 0;
}
