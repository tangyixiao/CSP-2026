#include<bits/stdc++.h>
using namespace std;

long long n,m,a[1000001],ans[1000001],vis[1000001];
stack<int>p;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				vis[a[j]]=1;
				p.push(a[j]);
			}
			else{
				while(!p.empty()){
					long long bh=p.top();
					p.pop();
					vis[bh]=0;
					if(bh==a[j]){
						break;
					}
				}
				vis[a[j]]=1;
				p.push(a[j]);
			}
		}
		while(!p.empty()){
			long long va=p.top();
			p.pop();
			ans[va]++;
			vis[va]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
