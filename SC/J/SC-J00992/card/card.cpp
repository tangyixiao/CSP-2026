#include<bits/stdc++.h>
#define LL long long
using namespace std;
int a[505],cnt[205],ans[205];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int ii=1;ii<=n;ii++){
		stack<int>q;
		memset(cnt,0,205*4);
		for(int i=ii;i<=n;i++){
			if(cnt[a[i]]==0){
				cnt[a[i]]=1;
				q.push(a[i]);
			}
			else{
				while(q.top()!=a[i]){
					cnt[q.top()]=0;
					q.pop();
				}
				if(q.top()==a[i]) q.pop();
				q.push(a[i]);
			}
		}
		for(int i=1;i<=m;i++){
			if(cnt[i]==1) ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 