#include<iostream>
using namespace std;
int n;
const int N = 2e5+5;
char c[N];
long long a[N];
long long ans = 0;
long long len = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		scanf("%lld ",a+i); 
		scanf("%c",c+i);
		len += a[i];
	}
	long long mid = (len+1)/2;
	if(len % 2 == 1){
		int lc = 1,rc = n;long long llen = 0,rlen = 0;
		while(!(llen == mid-1&&rlen == mid-1)){
			long long lpos = min(llen,rlen)+1;
			if(llen < rlen)llen += a[lc];
			else if(llen == rlen)llen += a[lc],rlen += a[rc];
			else rlen += a[rc];
			if(llen >= mid)llen = mid-1;
			if(rlen >= mid)rlen = mid-1;
			long long rpos = min(llen,rlen);
			if(c[lc]!=c[rc])ans+=rpos-lpos+1;
			if(llen < rlen)lc++;
			else if(llen == rlen)lc++,rc--;
			else rc--;
		}
	}
	else{
		int lc = 1,rc = n;long long llen = 0,rlen = 0;
		while(!(llen == mid&&rlen == mid)){
			long long lpos = min(llen,rlen)+1;
			if(llen < rlen)llen += a[lc];
			else if(llen == rlen)llen += a[lc],rlen += a[rc];
			else rlen += a[rc];
			if(llen >= mid)llen = mid;
			if(rlen >= mid)rlen = mid;
			long long rpos = min(llen,rlen);
			if(c[lc]!=c[rc])ans+=rpos-lpos+1;
			if(llen < rlen)lc++;
			else if(llen == rlen)lc++,rc--;
			else rc--;
		}
	}
	cout << ans;
	return 0;
}