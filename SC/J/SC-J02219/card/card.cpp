#include<bits/stdc++.h>
using namespace std;

int n,m,a[500050],ans[300050];
vector< vector<int> > rep(500050);

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		rep[a[i]].push_back(i);
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;){
			int x=rep[a[j]].size();
			ans[a[j]]++;
			j=rep[a[j]][x-1]+1;
		}
	}
	for (int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}