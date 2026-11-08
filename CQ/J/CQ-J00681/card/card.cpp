#include<bits/stdc++.h>
using namespace std;
const int N=5e5+111;
int a[N];
int t[N],pre[N];
bool f[N];
int nxt[N];
int t2[N];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		t[i]=1;
	}
	for(int i=n;i>=1;i--){
		if(nxt[a[i]]){
			pre[i]=nxt[a[i]];
		}else{
			f[i]=1;
			pre[i]=i+1;
		}
		nxt[a[i]]=i;
	}
	long long ans=0;
	for(int i=1;i<=n;i++){
		if(f[i]){
			t2[a[i]]+=t[i];
		}
		t[pre[i]]+=t[i];
	}
	for(int i=1;i<=m;i++){
		printf("%d ",t2[i]);
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

Aurelia_Veil 
I love Yore_Snow!!!
*/
