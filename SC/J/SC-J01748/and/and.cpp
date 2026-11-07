#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n,m;
struct node{
	int v,b[35];
}a[MAXN];
bool cmp(node x,node y){return x.v>y.v;}
signed main(){
//	freopen("Csub.txt","r",stdin);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;cin>>x; 
		a[i].v=x;
		int j=0;
		for(int j=31;j>=0;j--){
			a[i].b[j]=(((1<<j)&x)>0);
//			cout<<a[i].b[j];
		}
//		cout<<"\n";
	}
	for(int j=31;j>=0;j--){
		int cnt=0;
		vector<node> v;
		for(int i=1;i<=n;i++){
			if(a[i].b[j]==1){
				cnt++;
				v.push_back(a[i]);
			}
		}
		if(cnt<m) continue;
//		cout<<cnt<<"\n";
		sort(v.begin(),v.end(),cmp);
		int ans=v[0].v;
		for(int i=1;i<m;i++){
			ans&=v[i].v;
		}
		return cout<<ans,0;
	}
	cout<<0;
	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/