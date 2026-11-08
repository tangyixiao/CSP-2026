#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[500005];
bool vis[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>5000){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]) cnt[a[i]]=i;
		}
		for(int j=1;j<=m;j++){
			cout<<cnt[j]<<" ";
		}
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	for(int i=1;i<=n;i++){
		stack<int> s;
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==1){
				while(s.top()!=a[j]){
					vis[s.top()]=0;
					s.pop();
				}
			}
			else{
				vis[a[j]]=1;
				s.push(a[j]);
			}
		}
		while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
