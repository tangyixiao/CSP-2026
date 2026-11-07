#include<bits/stdc++.h>
using namespace std;
int n,m,cnt;
int ans[300005];
int a[500005],id[500005];
pair<int,int> b[500005];
vector<int> v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1]){
		    b[++cnt].first=a[i];
		    b[cnt].second=1;
			id[cnt]=-1;	
			v[a[i]].push_back(cnt);
		}
		else b[cnt].second++;
	}
	for(int i=1;i<=m;i++) for(int j=0;j<v[i].size()-1;j++) id[v[i][j]]=v[i][v[i].size()-1];
	for(int i=1;i<=cnt;i++){
		for(int j=i;j<=cnt;j++){
			ans[b[j].first]+=b[i].second;
			if(id[j]!=-1) j=id[j];
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}