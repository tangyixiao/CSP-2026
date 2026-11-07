#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],use[N],cnt[M],ans,la[M],now;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		now=0;
		for(int j=1;j<=m;j++){
			la[j]=-1;
		}
		for(int j=i;j<=n;j++){
//			cout<<la[a[j]]<<' ';
			if(la[a[j]]!=-1&&la[a[j]]<=now){
				now=la[a[j]];
			}else{
				use[++now]=a[j];
				la[a[j]]=now;
			}
		}
		for(int j=1;j<=now;j++){
//			cout<<use[j]<<' ';
			cnt[use[j]]++;
		}
//		cout<<'\n';
	}
	
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

*/