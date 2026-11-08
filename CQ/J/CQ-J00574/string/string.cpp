#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
struct fr{
	char x;
	int y;
}a[200001],b[200001];
int s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		int x;char y;
		scanf("%lld %c",&x,&y);
		a[i].x=y,a[i].y=x;
		b[n-i+1].x=a[i].x;
		b[n-i+1].y=a[i].y;
	}
	int al=1,bl=1;
	while(true){
		if((al==n&&a[n].y==0)||al==n+1||bl==n+1)	break;
		if(a[al].x==b[bl].x){
			if(a[al].y>b[bl].y)	a[al].y-=b[bl].y,bl++;
			else	b[bl].y-=a[al].y,al++;
		}else{
			if(a[al].y>b[bl].y)	a[al].y-=b[bl].y,s+=b[bl].y,bl++;
			else	b[bl].y-=a[al].y,s+=a[al].y,al++;
		}
	}
	printf("%lld",s/2);
	return 0;
}


