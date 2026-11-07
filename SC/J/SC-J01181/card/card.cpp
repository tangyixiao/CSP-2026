#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cf[500005],vis[500005],ans[500005];
deque<int>v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n>5000){
		for(int i=1;i<=m;i++)cout<<n-i+1<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int shang=-1;
			for(int c:v[a[j]]){
				if(c==j){
					if(shang==-1 || shang<i)break;
					if(vis[shang]==1)break;
					else{
						vis[shang]=2;
						for(int k=shang+1;k<c;k++){
							vis[k]=1;
						}
						break;
					}
				}
				shang=c;
			}
		}
		for(int j=i;j<=n;j++){
			if(vis[j]==0)ans[a[j]]++;
			vis[j]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
} 