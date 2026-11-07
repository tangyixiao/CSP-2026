#include<bits/stdc++.h>
using namespace std;
int val[200003][33],cnt[33],tag[200003];
long long mi[33],ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	mi[0]=1;
	for(int i=1;i<=31;i++) mi[i]=mi[i-1]*2;
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int now,pos=0;
		scanf("%d",&now);
		while(now!=0){
			cnt[pos]+=(now&1),val[i][pos]=(now&1);
			now>>=1,pos++;
		}
	}
	for(int i=31;i>=0;i--){
		if(cnt[i]>=m){
			ans+=mi[i];
			for(int j=1;j<=n;j++)
				if(val[j][i]!=1&&tag[j]==0){
					tag[j]=1;
					for(int k=i;k>=0;k--) cnt[k]-=val[j][k];
				}
		}
	}
	printf("%lld\n",ans);
	return 0;
}