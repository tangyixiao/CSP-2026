#include<bits/stdc++.h>
#define FILE "card"
using namespace std;
const int N=500010,M=300010;
int n,m,a[N],cnt[M],nxt[N],hsh[M];
int main(){
	freopen(FILE".in","r",stdin);
	freopen(FILE".out","w",stdout);
	scanf("%d%d",&n,&m); 
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;++i){
		memset(hsh,-1,sizeof(hsh));
		for(int j=0;j<n;++j){
			nxt[j]=j-1;
		}
		for(int j=i;j<n;++j){
			if(hsh[a[j]]!=-1){
				int pt=j,cpy=hsh[a[j]];
				while(pt!=cpy){
					pt=nxt[pt];
					hsh[a[pt]]=-1;
				}
				nxt[j]=nxt[cpy];
			}
			hsh[a[j]]=j;
		}
		for(int j=1;j<=m;++j){
			if(hsh[a[j]]!=-1){
				cnt[j]++;
			} 
		}
	}
	for(int i=1;i<=m;++i){
		printf("%d ",i);
	}
	return 0;
}
