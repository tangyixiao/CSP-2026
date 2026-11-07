#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=200010;
int n;
int a[N];
char s[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int l=1,r=0;
	int b=LONG_LONG_MAX;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i],&s[i]);
		r+=a[i];
		b=min(b,a[i]);
	}
	int ans=0;
	int nr=r;
	int ni=1,nj=n;
	while(l<nr){
		if(l>a[ni]){
			ni++;
		}
		if(nr<=(r-a[nj])){
			nj--;
		}
		if(s[ni]!=s[nj]){
			ans+=b;
		}
		l+=b;
		nr-=b;
	}
	cout<<ans;
	return 0;
}