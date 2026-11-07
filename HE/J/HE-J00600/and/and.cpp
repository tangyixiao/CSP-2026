#include<bits/stdc++.h>
using namespace std;
typedef long long lo;
lo a[200001],n,m,x = -1,y;
bool st[200001];
void qpl(lo step,lo yh,lo la) {
	if(step > m) {
		x = max(x,yh);
		return;
	}
	if(yh < x) return;
	for(lo i = la+1;i <= n;i++) {
		if(st[i]) continue;
		st[i] = true;
		if(step == 1) qpl(step+1,a[i],i);
		else qpl(step+1,yh&a[i],i);
		st[i] = false;
	}
	return;
}
int main () {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	bool f1 = true,f2 = true;
	for(lo i = 1;i <= n;i++) {
		scanf("%lld",&a[i]);
		x = max(x,a[i]);
		if(i == 1) y = a[i];
		else y &= a[i];
		if(i != 1 && (a[i-1]+1)*2 != a[i]+1) f1 = false;
		if(a[i] != i-1) f2 = false;
	}
	if(m == 1) {
		printf("%lld",x);
		return 0;
	}
	if(m == 2) {
		x = -1;
		for(lo i = 1;i <= n;i++) for(lo j = i+1;j <= n;j++) x = max(x,a[i]&a[j]);
		printf("%lld",x);
		return 0;
	}
	if(m == n) {
		printf("%lld",y);
		return 0; 
	}
	if(f1) {
		sort(a+1,a+n+1);
		printf("%lld",a[n]);
		return 0;
	}
	if(f2) {
		for(int j = 0;j < n;j++) {
			x = -1;
			for(int i = n;i >= 1;i /= 2) {
				if(st[i-j]) continue;
				m--;
				st[i-j] = true;
				x = max(x,a[i-j]);
				if(m == 0) {
					printf("%lld",x);
					return 0;
				}
			}
		}
	}
	x = -1;
	qpl(1,0,0);
	printf("%lld",x);
	return 0;
}
