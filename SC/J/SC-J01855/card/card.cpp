#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,m;
int a[500005],b[300005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int> q;
		for(int j=1;j<=m;j++)b[j]=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				while(q.top()!=a[j]){
					b[q.top()]=0;
					q.pop();
				}
				q.pop();
			}
			b[a[j]]=1;
			q.push(a[j]);
		}
		for(int j=1;j<=m;j++){
			ans[j]+=b[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 