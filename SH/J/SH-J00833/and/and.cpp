#include<bits/stdc++.h>
using namespace std;
int n,m,s=0;
vector<int>num;
void dfs(int ans,int use,int pos){
	if(use==m){
		s=max(s,ans);
		return;
	}if(pos==n){
		return;
	}
	dfs(ans&num[pos],use+1,pos+1);
	dfs(ans,use,pos+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		num.push_back(x);
	}
	dfs(1048575,0,0);
	cout<<s;
} 
