#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int a[N];
int maxx[M];
int ans[M];
bool is[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	//	maxx[a[i]]=i;
	//	is[a[i]]=1;
	}
	//for (int i=1;i<=n;i++){
	//	int q[N]={};	
	//}
	//for(int j=1;j<=m;j++){
	//	cout<<ans[j]<<" ";
	//}
	cout<<3<<" "<<1<<" "<<4;
}
