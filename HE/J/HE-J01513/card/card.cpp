#include<bits/stdc++.h>
using namespace std;
#define int long long 
int vis[500005];
int a[500005];
int s[500005];
deque<int>q;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==1){
				while(q.back()!=a[j]){
					vis[q.back()]=0;
					q.pop_back();
				}
			}
			else q.push_back(a[j]);
			vis[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			s[j]+=vis[j];
			vis[j]=0;
		}
	}
	for(int i=1;i<=m;i++) cout<<s[i]<<" ";
	return 0;
}
