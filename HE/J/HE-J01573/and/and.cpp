#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans,ans2;
vector<int> v;
void dfs(int idx,int ans,int &h){
	if(h>m){
		v.push_back(ans);
		return;
	} 
	for(int i=idx;i<=n;i++){
		if(h==1){
			ans=a[i];
		}
		ans=ans&a[i];
		int ans2=ans;
		h++;
		dfs(i+1,ans,h);
		h--;
		ans=ans2;
	}
	if(idx+m-1>n) return;
}
int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int h=1;
	dfs(1,ans,h);
	cout<<*max_element(v.begin(),v.end());
	return 0;
}
