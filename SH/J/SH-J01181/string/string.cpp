#include<cstdio>
#include<algorithm>
using namespace std;
struct stri{
	long long l, r;
} b[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, l, r;
	long long L=0, a[200005], now=0, lp, rp, move, s=0;
	char c[200005];
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c", &a[i], &c[i]);
		b[i].l=now+1;
		b[i].r=now+a[i]; 
		now+=a[i];
		L+=a[i];
	}
	//printf("%d %lld\n", n, L);
	l=1, r=n;
	lp=1, rp=L;//正在处理 
	while(lp<rp){
		//printf(";");
		move=min(b[l].r-lp+1, rp-b[r].l+1);
		if(c[l]!=c[r]){
			s+=move;
		}
		lp+=move, rp-=move;
		if(lp>b[l].r){
			l++;
		}
		if(rp<b[r].l){
			r--;
		}
	}
	printf("%lld", s);
	return 0;
}
