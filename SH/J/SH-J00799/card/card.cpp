#include<bits/stdc++.h>
using namespace std;
vector<int>pos[300005];
int a[500005];
int n,m;
int ans[500005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		int x;
		cin>>x;
		pos[x].push_back(i);
		a[i] = x;
	}
	int cur,idx;
	for(int i = 1;i<=n;i++){
		idx = i;
		while(idx<=n){
			cur = pos[a[idx]].back();
			if(cur!=idx){
				idx = cur;
			}else{
				ans[a[idx]]++;
				idx++;
			}
		}
	}
	for(int i = 1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
