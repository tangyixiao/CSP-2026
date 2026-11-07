#include<bits/stdc++.h>
using namespace std;
const int N=500010,M=300010;
int n,m,a[N],pre[N],res[M],stk[N],tot;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int w=1;w<=n;w++){
		tot=0;
		memset(pre,0,sizeof(pre));
		for(int i=w;i<=n;i++){
			if(pre[a[i]]){
				while(tot&&stk[tot]!=a[i]){
					pre[stk[tot]]=0;
					tot--;
				}
				tot--;
			}
			stk[++tot]=a[i];
			pre[a[i]]=i;
		}
		for(int j=1;j<=tot;j++){
			res[stk[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<res[i]<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/