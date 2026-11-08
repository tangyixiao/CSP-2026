#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n,m;
int P[300005];
int ans[300005];
int num[500005];
int sum[500005];
vector<int>V[500005];

void File(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
}

void DFS(int now){
	sum[now]=1;
	for(auto i:V[now]){
		DFS(i);
		sum[now]+=sum[i];
	}
}

int main(){
	File();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		P[num[i]]=i+1;
	}
	for(int i=1;i<=n;i++){
		V[P[num[i]]].push_back(i);
	}
	DFS(n+1);
	for(int i=1;i<=n;i++){
		ans[num[i]]+=sum[i];
	}
	cout<<ans[1];
	for(int i=2;i<=m;i++){
		cout<<" "<<ans[i];
	}
	return 0;
}
/*
Green AC
*/
