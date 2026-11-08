#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
long long h;
long long a[100005];
vector<long long> v;
void dfs(int x,int cnt){
	if(x>n){
		if(v.size()==m){
			long long sum=v[0];
			for(int i=0;i<v.size();i++){
				sum=sum&v[i];
			}	
			ans=max(ans,sum);
		}
		return;
	}
	if(v.size()==m){
		long long sum=v[0];
			for(int i=0;i<v.size();i++){
				sum=sum&v[i];
			}	
		ans=max(ans,sum);
		return;
	}
	
	v.push_back(a[x]);
	dfs(x+1,cnt++);
	v.pop_back();
	dfs(x+1,cnt);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	dfs(1,0);
	
	cout<<ans;
}
