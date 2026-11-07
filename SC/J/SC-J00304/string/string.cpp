#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
char c[N];
int n,ans,a[N];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=a[n],lk=1,rk=n;
	while(true){
		int nl=a[lk]+1,nr=0;
		int len=min(nl-l,r-nr);
		if(c[lk]!=c[rk]) ans+=len; 
		l+=len;r-=len;
		if(l>a[lk]){
			l-=a[lk];
			lk++;
		}
		if(r<=0){
			rk--;
			r+=a[rk];
		}
		if(lk>=rk) break;
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/