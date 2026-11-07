#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long n,a[N],L,l[N],c,ans,cc;
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i = 1; i <= n; i ++){
		scanf("%lld %c",&a[i],&b[i]);
		l[i] = l[i-1] + a[i];
		//cout<<l[i]<<endl; 
		L += a[i];}
	for(long long c = 1; c <= L/2 + L % 2;){
		char aa,bb;
		cc = c;
		long long aaa = 0,bbb = 0;
		aaa = lower_bound(l + 1,l + n + 1,c) - l;
		bbb = lower_bound(l + 1,l + n + 1,L - c + 1) - l;
		aa = b[aaa];
		bb = b[bbb];
		if(aa == bb){
			c = min(l[aaa] + 1,L + 1 - l[bbb - 1]);
		}
		else{
			ans += min(l[aaa] - c + 1,L - c + 1 - l[bbb - 1]);
			c = min(l[aaa] + 1,L - l[bbb - 1] + 1);
			//cout<<ans<<endl;
		}
		//cout<<c<<" "<<aaa<<" "<<bbb<<endl;
	}
	printf("%lld",ans);
	return 0;
}
