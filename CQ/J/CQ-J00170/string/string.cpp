#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char s1[200000005],s2[200000005];
long long ans,ans2,d=1;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d %c",&a[i],&c[i]),ans+=(long long)a[i];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=a[i];j++) s1[d]=c[i],s2[ans-d+1]=c[i],d++;
	}
	d=1;
	for (long long i=1;i<=ans;i++){
		if (s1[d]!=s2[d]) ans2++;
		d++;
	}
	printf("%d",ans2/2ll);
	return 0;
}
