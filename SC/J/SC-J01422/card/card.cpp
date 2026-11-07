#include<bits/stdc++.h>
using namespace std;
int a[500006],ZINz[300006];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		vector<int> v;
		for(int j=i;j<=n;j++){
			int z=a[j],zz=j;
			for(int k=j+1;k<=n;k++){
				if(a[k]==z) zz=k;
			}
			v.push_back(a[zz]);
			j=zz;
		}
		for(int j=1;j<=m;j++){
			for(int vv:v) ZINz[j]+=(j==vv);
		}
	}
	for(int i=1;i<=m;i++) cout<<ZINz[i]<<' ';
	cout<<"\n";
	return 0;
}