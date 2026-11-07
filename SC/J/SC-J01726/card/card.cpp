#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define endl '\n'
#define pii pair<int,int>
const int M=2e5+5;
int n,m,a[M],ans[M]={0};
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[0]=a[1];
		if(a[i]!=a[i-1]) ans[a[i-1]]=i-1;
	}
	ans[a[n]]=n;
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
//RP++
//K,再也不去想线段树了,写了那么久结果没调出来TVT 
//10-31 11:40:01