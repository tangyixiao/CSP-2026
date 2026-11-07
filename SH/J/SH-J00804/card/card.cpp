#include<stdio.h>
#include<cctype>
using namespace std;
int n,m,a[500005],ans[300005],exist[300005];
int read(){
	char c=getchar();int x=0;
	for(;!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar()) x=x*10+c-'0';
	return x;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) exist[j]=0;
		for(int j=i;j<=n;j++){
			int x=a[j];
			if(exist[x]){
				for(int l=1;l<=m;l++) if(exist[l]>exist[x]) exist[l]=0;
			}
			exist[x]=j;
		}
		for(int j=1;j<=m;j++){
			if(exist[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	return 0;
}
