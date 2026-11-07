#include<bits/stdc++.h>
using namespace std;
const int N=5e5+1e3,M=3e5+1e3;
int n,m,a[N],as[N],qz[M],jp[M],ans[M];
vector<int>v[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		as[i]=1;
		jp[i]=v[a[i]].size();
		v[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		qz[a[i]]=as[i];
		if(jp[i]+1<v[a[i]].size()){
			as[v[a[i]][jp[i]+1]]+=qz[a[i]];
		}else if(i!=n){
			as[i+1]+=as[i];
		}
		ans[a[i]]=max(ans[a[i]],as[i]);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<(string)((i==m)?"\n":" ");
	}
	return 0;
}