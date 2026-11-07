#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int c[500005];
int ans[300005],w[300005];
bool b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int j=1;j<=n;j++){
		int top=0;
		memset(b,false,sizeof(b));
		for(int i=j;i<=n;i++){
			if(!b[a[i]]){
				c[++top] = a[i];
				w[c[top]] = top;
				b[c[top]] = true;
			}else{
				for(int k = w[a[i]]+1;k<=top;k++)
					b[c[k]] = false;
				top = w[a[i]];
			}
		}
		
		for(int i=1;i<=top;i++)
			ans[c[i]]++;
	}
	for(int i=1;i<=m;i++)
		printf("%d ",ans[i]);
}
