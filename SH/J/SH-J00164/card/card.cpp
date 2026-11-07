#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int MAXN=500005,MAXM=300005;
int n,m,a[MAXN],cnt[MAXN],f[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int round=1;
	while(round<=n){
		int p[MAXM];
		for(int i=round;i<=n;i++){
			if(f[a[i]]) {
				for(int j=p[a[i]];j<=i;j++) f[a[j]]=0;
			}f[a[i]]=1;
			p[a[i]]=i;
		}for(int i=1;i<=m;i++) cnt[i]+=f[i];
		memset(f,0,sizeof f);
		round++;
	}for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
