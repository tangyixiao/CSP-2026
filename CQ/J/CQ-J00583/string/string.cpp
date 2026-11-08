#include<bits/stdc++.h>
#define int long long
using namespace std;

int n;
int ans;
int L,R;
int idl,idr;
int a[200005];
char c[200005];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	L=1,R=n;
	idl=1,idr=1;
	while(L<R){
		int p=min(a[L]-idl+1,a[R]-idr+1);
		idl+=p,idr+=p;
		ans+=((c[L]!=c[R])*p);
		if(idl>a[L]){
			L++,idl=1;
		}
		if(idr>a[R]){
			R--,idr=1;
		}
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
