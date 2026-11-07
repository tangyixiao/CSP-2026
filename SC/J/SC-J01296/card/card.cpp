#include<bits/stdc++.h>
using namespace std;
int a[500010],cnt[300010],cnt1[300010];
bool vis[300010];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	bool flag=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=1;
		cnt1[a[i]]++;
	}
	if(flag==0){
		for(int i=2;i<=n;i++){
			if(a[i-1]!=a[i]){
				cout<<i-1<<" ";
			}
		}
		cout<<n;
		return 0;
	}
	else if(n*n<=600000000){
		stack<int> q;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(vis[a[j]]==1){
					while(!q.empty()&&q.top()!=a[j]){
						vis[q.top()]=0;
						q.pop();
					}
					if(!q.empty()&&q.top()==a[j]){
						q.pop();
					}
				}
				q.push(a[j]);
				vis[a[j]]=1;
			}
			while(!q.empty()){
				vis[q.top()]=0;
				cnt[q.top()]++;
				q.pop();
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<" ";
		}
	}
	else{
		int la=0;
		for(int i=n;i>=1;i--){
			if(cnt1[a[i]]>1){
				la=i;
				break;
			}
		}
		for(int i=1;i<=n;i++){
			cnt1[a[i-1]]--;
			while(la>=1&&cnt1[a[la]]<=1){
				la--;
			}
			for(int j=la;j<=n;j++){
				cnt[a[j]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<" ";
		}
	}
	return 0;
}