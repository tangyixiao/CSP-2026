#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],h;
int main(){
	freopen("and.in","r",stdin)
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]<a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	h=a[1];
	for(int i=2;i<=m;i++){
		h=h&a[i];
	}
	printf("%d",h);
	return 0;
}