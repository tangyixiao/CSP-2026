#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int b[100005];
int pre[100005];
int ans[100005];
int mp[N];
queue<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int flag=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q.push(a[i]);
		if(a[i]<a[i-1]){
			flag=1;
		}
	}
	if(!flag){
		for(int i=1;i<=n;i++){
			b[a[i]]++;
		}
		for(int i=1;i<=m;i++){
			pre[i]=pre[i-1]+b[i];
		}
		for(int i=1;i<=m;i++){
			cout<<pre[i]<<" ";
		}
		return 0;
	}
	while(!q.empty()){
		for(int i=n;i>n-q.size();i--){
			memset(mp,-1,sizeof(mp));
			if(mp[a[i]]==-1){
				mp[a[i]]=i;
			}
			else{
				for(int j=i+1;j<=mp[a[i]];j++){
					mp[a[j]]=-1;
				}
				mp[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++){
			if(mp[i]!=-1){
				ans[i]++;
			}
		}
		q.pop();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 