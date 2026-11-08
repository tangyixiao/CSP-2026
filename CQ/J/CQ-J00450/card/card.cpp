#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500010];
vector<int> v[500010];
vector<int> v1[500010];
int ans[500010];

int o(int x){
	int num=1;
	for(int i=0;i<v1[x].size();i++){
		int y=v1[x][i];
		num=num+o(y);
	}
	ans[a[x]]=ans[a[x]]+num;
	return num;
}

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		int x=a[i];
		int y=v[x][v[x].size()-1];
		v1[y+1].push_back(i);
	}
	o(n+1);
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m) cout<<" ";
	}
	return 0;
} 
