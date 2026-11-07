#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,m;const int N=2e5+100;
LL check(LL n){
	if(n==0)return 0;
	LL cnt=0;string r;
  while(n!=0){
	  if(n%2==1)cnt++;
	  n/=2;
  }
	return cnt;
}
struct node {
	LL num,a;
}a[N];
bool cmp(node n1 ,node n2){
	return n1.num>n2.num;
}
LL s;
bool f;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i].a);
		LL x=check(a[i].a);
		a[i].num=x;
		if(a[i].a==a[i-1].a && a[i].a>s){
			s=a[i].a;f=true;
		}
	}
	if(f){
		printf("%lld",s);
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	LL ma=0;
	if(n<2e5){
		for(int i=1;i<n;i++){
			LL t=a[i].a;
			for(int j=1;j<m;j++){
				t=a[i+j].a& t;
			}
				ma=max(ma,t);
		}
			printf("%lld",ma);
		return 0;
	}
   LL t=a[1].a;
		for(int j=1;j<m;j++){
			 t=a[1+j].a & t;
		}
		
	
	printf("%lld",t);
	return 0;
}