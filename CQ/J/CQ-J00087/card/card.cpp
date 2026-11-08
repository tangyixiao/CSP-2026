#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,kards[500005],cnt[500005];
stack<int> s;
bool vis[500005];

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>kards[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(vis[kards[j]]==0){
				vis[kards[j]]=1;
				s.push(kards[j]);
			}else{
				while(s.top()!=kards[j]){
					vis[s.top()]=0;
					s.pop();
				}
				s.pop();
				s.push(kards[j]);
			}
		}
		while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
		memset(vis,0,sizeof(vis));
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	
	return 0;
} 
