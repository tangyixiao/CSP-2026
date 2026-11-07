#include<bits/stdc++.h>
using namespace std;
const int N=500005;
int a[N],b[N],cnt[N];
bool vis[N];
void sequence(int x){
	int t=0;
	for(int i=1;i<=x;i++){
		if(!cnt[i])cout<<'0'<<' ';
		else cout<<++t<<' ';
	}
}stack<int>s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;bool f=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		if(a[i]>a[i-1])f=false;
	}
	if(f){sequence(m);return 0;}
	memset(cnt,0,sizeof(cnt));
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(!s.empty()){
					int t=s.top();s.pop();
					vis[t]=false;
					if(t==a[j])break;
				}
			}vis[a[j]]=true;
			s.push(a[j]);
		}
		while(!s.empty()){
			int t=s.top();s.pop();
//			cout<<t<<' ';
			cnt[t]++;
		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<' ';
	return 0;
}
//CSP-J 2026 RP++!!!!