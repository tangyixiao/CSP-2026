#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000010],vis[1000010],vis2[1000010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	bool zeng=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i]) zeng=false;
	}
	if(zeng){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) vis2[j]=0;
			for(int j=i;j<=n;j++){
				if(vis2[a[j]]==0){
					vis[a[j]]++;
					vis2[a[j]]=1;
				}
			}
		}
		for(int i=1;i<=m;i++) cout<<vis[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		vector<int>q;
		for(int j=i;j<=n;j++){
			for(int k=0;k<q.size();k++){
				if(q[k]==a[j]){
					for(int l=1;l<=q.size()-k;l++) q.pop_back();
				}
			}
			q.push_back(a[j]);
		}
		for(int j=1;j<=m;j++) vis2[j]=0;
		for(int j=0;j<q.size();j++){
			if(vis2[q[j]]==0){
				vis[q[j]]++;
				vis2[q[j]]=1;
			}
		}
	} 
	for(int i=1;i<=m;i++) cout<<vis[i]<<" ";
	return 0;
}



