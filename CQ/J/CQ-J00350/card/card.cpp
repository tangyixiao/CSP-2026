#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=5e5+5;
int N,M;
int a[MAXN];
int p[MAXN];
int pre[MAXN];
int tmp[MAXN];
int Ans[MAXN];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>N>>M;
	for(int i=1;i<=N;i++)cin>>a[i];
	for(int i=1;i<=N;i++){
		pre[i]=tmp[a[i]];
		tmp[a[i]]=i;
	}
	for(int i=1;i<=N;i++){
		if(!pre[i])pre[i]=i;
	}
	for(int i=N;i>=1;i--){
		if(!p[a[i]])p[a[i]]=i;
	}
	for(int i=1;i<=N;i++){
		bool vis[MAXN];
		for(int j=i;j<=N;j++)vis[j]=1;
		for(int j=i;j<=N;j++){
			int t=j;
			while(t!=pre[t]&&pre[t]>=i){
				t=pre[t];
				if(vis[t])break;
			}
			if(vis[t]){
				for(int k=t;k<j;k++){
					vis[k]=0;
				}
			}
		}
		for(int j=1;j<=M;j++){
			if(p[j]>=i&&vis[p[j]])Ans[j]++;
		}
	}
	for(int i=1;i<=M;i++)cout<<Ans[i]<<" ";
	return 0;
}

