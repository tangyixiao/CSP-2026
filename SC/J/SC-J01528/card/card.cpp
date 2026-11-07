#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,a[500005],vis[500005],ans[500005];
stack<int>q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m; 
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]!=1){ 
				vis[a[j]]=1;
				q.push(a[j]);
			}
			else{
				while(!q.empty()){
					if(q.top()==a[j]){
						break;
					}
					else{
						vis[q.top()]=0;
						q.pop();
					}
				}
			}
		}
		while(!q.empty()){
			ans[q.top()]++;
			vis[q.top()]=0;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
