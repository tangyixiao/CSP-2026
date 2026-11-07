#include <bits/stdc++.h>
using namespace std;
int n,m;
int ans=0;
const int e=2e5+5;
int A[e];
void dfs(vector<int>D){
	if(D.size()==m){
		int sum=A[D[0]];
		for(int i=1;i<D.size();i++)sum&=A[D[i]];
		ans=max(ans,sum);
		return;
	}
	int last=D.size()==0?1:D.back()+1;
	for(int i=last;i<=n;i++){
		D.push_back(i);
		dfs(D);
		D.pop_back(); 
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>A[i];
	if(m==n){
		int sum=A[1]; 
		for(int i=1;i<=n;i++)sum&=A[i];
		return cout<<sum,0;
	}
	if(m==1){
		int sum=0;
		for(int i=1;i<=n;i++)sum=max(sum,A[i]);
		return cout<<sum,0;
	}
	if(n>2000)return cout<<0,0;
	vector<int>D;
	dfs(D);
	cout<<ans;
	return 0;
}