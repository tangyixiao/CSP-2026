#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=5e5+5;
int n,m,x;
int a[N],s[N],b[N],p[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		memset(s,0,sizeof(s));
		memset(p,0,sizeof(p));
		x=0;
		for(int j=i;j<=n;j++){
			if(s[p[a[j]]]==a[j]&&x>=p[a[j]]) x=p[a[j]];
			else x++,p[a[j]]=x,s[x]=a[j];
		}
		for(int i=1;i<=x;i++) b[s[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}