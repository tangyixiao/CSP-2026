#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,m,num[300002],a[500002],f[500002],t[300002],vis[300002];
queue<int> q;
//void sol(queue<int> q){
//	queue<int> qq;
//	int vv[q.size()+1]={};
//	
//}
void sol(int x,int y){
	for(int i=1;i<=n;i++){
		vis[i]=t[i]=f[i]=0;
	}
	for(int i=x;i<=y;i++){
		t[a[i]]++;
		if(t[a[i]]==2){
			for(int j=vis[a[i]];j<i;j++){
				if(f[j]){
					continue;
				}
				f[j]=1;
				t[a[j]]--;
			}
		}
		vis[a[i]]=i;
//		for(int i=1;i<=m;i++){
//			cout<<t[i]<<" ";
//		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		if(t[i]){
			num[i]++;
		}
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		sol(i,n);
	}
//	sol(2,n);
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/