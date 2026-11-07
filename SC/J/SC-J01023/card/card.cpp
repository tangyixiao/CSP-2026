#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e3+5;
const int MAXM=3e3+5;
int flag[MAXM];
bool falg[MAXM];
int a[MAXN];
bool tmp[MAXN];
int res[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int l=1;l<=n;l++){
		memset(flag,0,sizeof(flag));
		memset(falg,0,sizeof(falg));
		memset(tmp,0,sizeof(tmp));
		for(int i=l;i<=n;i++){
			if(tmp[i])continue;
			if(flag[a[i]]&&tmp[flag[a[i]]]==0)for(int j=flag[a[i]];j<i;j++)tmp[j]=1;
			flag[a[i]]=i;
		}
		for(int i=l;i<=n;i++){
			if(tmp[i]!=1&&!falg[a[i]]){
				res[a[i]]++;
				falg[a[i]]=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<res[i]<<" ";
	}
	return 0; 
}