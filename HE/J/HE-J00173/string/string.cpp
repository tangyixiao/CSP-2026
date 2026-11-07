#include <bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long n,a[N];
char c[N];
long long len,l,r,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i=i+1) cin>>a[i]>>c[i];
	l=1;r=n;
	while(l<=r){
		long long tl=l,tr=r;
		if(a[l]<a[r]){
			len=a[l];
			a[r]-=a[l];l+=1;
		}else if(a[l]>a[r]){
			len=a[r];
			a[l]-=a[r];r-=1;
		}else{
			len=a[l];
			l+=1;r-=1;
		}
		if(tl>tr) break;
		if(c[tl]!=c[tr]) ans+=len;
	}
	cout<<ans<<endl;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
