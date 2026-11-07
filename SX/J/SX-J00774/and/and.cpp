#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m;
int a[N];
int mx=0;
//int summ=0x7fffffff;
/*
*/
bool flag=0;
void dfs(int k,int x,int summ){
	//if(summ==7) cout<<k<<x<<'\n';
//cerr<<k<<' '<<x<<' '<<summ<<'\n';

	if(x>=m){
//cerr<<"$$"<<summ<<'\n';
		//if(summ!=0x7fffffff)
		mx=max(summ,mx);
		//cerr<<"mx="<<mx<<'\n';
		return ;
	}
	if(k>n) return ;
//cerr<<"*"<<summ<<'\n';
	dfs(k+1,x,summ);
	//summ&=a[k];
	dfs(k+1,x+1,summ&a[k]);
}
void Solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,0,0x7fffffff);
	cout<<mx;
    return ;
}
/*

*/
signed main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int t=1;
    //cin>>t;
    while(t--) Solve();
    return 0;
}//