#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define de(x...) fprintf(stderr,x)
#define rep(i,l,r) for(auto i = l;i <= r;++i)
const int N = 200005;
int n;
ll m,L;
struct node{
	int x,c;
}e[N],a[N],b[N];
int ca,cb;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	rep(i,1,n){
		scanf("%d",&e[i].x),m += e[i].x;
		e[i].c = getchar();
		while(e[i].c < 'a' || e[i].c > 'z')	e[i].c = getchar();
		e[i].c -= 'a';
	}
	L = m/2;
	ll y = 0,F = 0;
	rep(i,1,n){
		if(!F){
			if(y + e[i].x <= L){
				y += e[i].x,a[++ca] = {e[i].x,e[i].c};
				if(y == L)	y = 0,F = 1,e[i+1].x -= (m & 1);
			}else{
				F = 1;
				a[++ca] = {L-y,e[i].c};
				if(m & 1)	b[++cb] = {e[i].x-(L-y)-1,e[i].c};	
				else	b[++cb] = {e[i].x - (L-y),e[i].c};	
			}
		}else	b[++cb] = {e[i].x,e[i].c};
	}
	reverse(a+1,a+1+ca);
	ll la = 0,lb = 0,A = 0;
	for(int i = 1,j = 0;i <= cb;++i){
		lb += b[i].x;
		while(j < ca && la + a[j+1].x <= lb)	A += (a[j+1].c != b[i].c) * a[j+1].x,la += a[j+1].x,++j;
		A += (a[j+1].c != b[i].c) * (lb - la),a[j+1].x -= (lb-la),la = lb;
	}
	printf("%lld\n",A);
	fclose(stdin);
	fclose(stdout);
	return 0;
}