#include<bits/stdc++.h>
using namespace std;

const int N=2e6+5;
int a[N];
long long ans=0;
char c[N];

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		scanf("%d %c\n",&a[i],&c[i]);
	}
	int i=1;
	while(i<=n){
		int len=n;
		if(a[i]<a[len]) {
			swap(a[i],a[len]);
			swap(c[i],c[len]);
		}
		if(a[i]!=a[len]){
			n--;
			if(c[i]!=c[len]) ans+=(long long)a[i];
			i++;
			continue;
		}
		a[i]-=a[len];
		n--;
		if(c[i]!=c[len]){
			ans+=(long long)a[len];
		}
	}
	printf("%lld",ans);
	return 0;
}

