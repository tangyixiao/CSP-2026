#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],lb=1,c[500010];
struct stu{
	int vi;
	bool yn;
}v[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		lb=1;
		memset(b,0,sizeof(b));
		memset(v,0,sizeof(v));
		for(int j=i;j<=n;j++){
			if(v[a[j]].yn==1&&v[a[j]].vi<=lb) lb=v[a[j]].vi;
			v[a[j]].yn=1;
			v[a[j]].vi=lb;
			b[lb++]=a[j];
		}
		lb--;
		for(int j=1;j<=lb;j++)
			c[b[j]]++;
	}
	for(int i=1;i<=m;i++)
		printf("%d ",c[i]);
	return 0;
}
