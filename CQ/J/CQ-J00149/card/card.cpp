#include<bits/stdc++.h>
using namespace std;
int a[500005];
int ans[300005],cnt[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		stack<int>q;
		for(int i=t;i<=n;i++){
			if(cnt[a[i]]){
				while(!q.empty()){
					if(a[i]==q.top()) break;
					cnt[q.top()]=0;
					q.pop();
				}
			}
			else{
				q.push(a[i]);
				cnt[a[i]]=1;
			}
		}
		while(!q.empty()){
			ans[q.top()]++;
			cnt[q.top()]=0;
			q.pop();
			
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
