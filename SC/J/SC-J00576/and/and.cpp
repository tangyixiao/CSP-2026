#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,l,r) for(auto i = l;i <= r;++i)
#define per(i,l,r) for(auto i = l;i >= r;--i)
const int N = 200005;
int n,m,A,a[N],v[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	rep(i,1,n)	scanf("%d",&a[i]);
	per(j,30,0){
		int c = 0;
		rep(i,1,n)
			if(!v[i])	c += (a[i]>>j&1);
		if(c >= m){
			rep(i,1,n)
				if(!(a[i]>>j&1))	v[i] = 1;
			A |= (1<<j);
		}
	}
	printf("%d\n",A);
	fclose(stdin);
	fclose(stdout);
	return 0;
}