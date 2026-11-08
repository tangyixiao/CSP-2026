#include<bits/stdc++.h>
using namespace std;

int n,m,num[200005];
int ans;
bool vis[200005];

void dfs(int now,int d){
	vis[now]=1;
	if(d==m){
		ans=max(now,ans);
		return;
	}
	for(int i=0;i<n;i++){
		if(vis[num[i]]==0){
			vis[num[i]]=1;
			dfs(now&num[i],d+1);
			vis[num[i]]=0;
		}
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	if(m==1){
		cout<<*max_element(num,num+n);
		return 0;
	}
	for(int i=0;i<n;i++){
		dfs(num[i],1);
	}
	cout<<ans;
		
	return 0;
} 
