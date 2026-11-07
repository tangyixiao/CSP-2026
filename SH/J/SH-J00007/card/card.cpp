//3 1 2 1 3 2 3 1 2 1
#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t[300005],num[300005];
vector<int> v[300005];
int dfs(int k){
	//cout<<k<<endl;
	for(vector<int>::iterator i=v[k].begin();i!=v[k].end();i++){
		num[k]+=dfs(*i);
	}
	//cout<<"un"<<k<<endl;
	return num[k];
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i-1]]=a[i];
		num[a[i]]++;
	}
	t[a[n]]=0;
	for(int i=1;i<=m;i++){
		v[t[i]].push_back(i);
	}
	dfs(a[n]);for(int i=1;i<=m;i++)cout<<num[i]<<" ";
	return 0;
} 
