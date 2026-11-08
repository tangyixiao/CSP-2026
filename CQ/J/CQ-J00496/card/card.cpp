#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],lst[500005],nxt[500005],mark[500005],ans[500005];
queue<int> q;
void bfs(int x){
	int cnt=0;
	q.push(x);
	mark[x]=1;
	while(!q.empty()){
		int kkk=q.front();
		q.pop();
		mark[kkk]=0;
		cnt++;
		for(register int j=kkk-1;(!nxt[j])&&j>0;j--){
			if(!mark[j]){
				mark[j]=1;
				q.push(j);
			}
		}
		if(lst[kkk]&&(!mark[lst[kkk]])){
			mark[lst[kkk]]=1;
			q.push(lst[kkk]);
		}
	}
	ans[a[x]]=cnt;
}
bool check(){
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(mark[a[i]]){
			nxt[i]=mark[a[i]];
			lst[mark[a[i]]]=i;
		}
		mark[a[i]]=i;
	}
	if(check()){
		for(int i=1;i<=n;i++){
			ans[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	memset(mark,0,sizeof(mark));
	for(int i=n;i>=1;i--){
		if(nxt[i]){
			continue;
		}
		bfs(i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
