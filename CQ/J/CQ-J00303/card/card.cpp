#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int lt[500005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		lt[a[i]]=i;
	}
//	for(int i=1;i<=m;i++) cout<<last[i]<<' '; cout<<endl;
	for(int s=1;s<=n;s++){
		for(int i=s;i<=n;i=lt[a[i]]+1){
//			cout<<i<<' '<<last[i]<<endl;
			ans[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
/*
4 3
1 2 1 3
*/
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
