#include<bits/stdc++.h>
using namespace std;
int p[500005],n,m,a[500005],s[300005],t[50005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	for(int i=1;i<=300000;i++)s[i]=1;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(p[a[i]]!=0){
			p[a[i]]=i;
			t[a[i]]=1;
		}
		else p[a[i]]=i+1;
	}
	for(int i=1;i<=n;i++){
		s[p[a[i]]]+=s[a[i]];
		if(t[a[i]]==0)s[p[a[i]]]+=s[p[a[i]]-1];
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",s[i]);
	}
	return 0;
}