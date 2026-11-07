#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
int ans[N];
int last[N];//记录A[I]的最后一个位置 
void solve(int start){
	for(int i=start;i<=n;i=last[a[i]]+1){
		ans[a[i]]++;
	}
}
void print(){
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	} 
	cout<<"\n";
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		last[a[i]]=i;
	}
//	for(int i=1;i<=m;i++){
//		cout<<last[i]<<" "; 
//	}
//	solve(1);
	for(int i=1;i<=n;i++){
		solve(i);
	}
	print();
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
