#include <bits/stdc++.h>
using namespace std;

int n;
struct node{
	int len;
	char c;
}a[200005];
long long pre[200005];
long long suf[200005];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d %c", &a[i].len, &a[i].c);
	}
//	printf("%d %c", a[n].len, a[n].c);
	for(int i=1;i<=n;i++){
		pre[i]=pre[i-1]+a[i].len;
	}
	for(int i=n;i>=1;i--){
		suf[i]=suf[i+1]+a[i].len;
	}
	long long ma=pre[n]/2;
	long long L=0,R=0;
	long long ans=0;
	for(int i=1,j=n;i!=j;){
		if (L>ma){
			break;
		}
		if (pre[i]<=suf[j]){
			L=R=pre[i];
			if (a[i].c!=a[j].c){
				ans+=a[i].len;
				//cout << a[i].len<<'\n';
			}
			a[j].len-=a[i].len;
			i++;
		} else{
			L=R=suf[j];
			if (a[i].c!=a[j].c){
				ans+=a[j].len;
			}
			a[i].len-=a[j].len;
			j--;
		}
		
	}
	printf("%lld\n", ans);
} 