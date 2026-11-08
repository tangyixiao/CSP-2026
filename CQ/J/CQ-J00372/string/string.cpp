#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define f(i,x,y) for(int i=x;i<=y;++i)
#define ff(i,x,y) for(int i=x;i>=y;--i)
#define gcd(x) __gcd(x)
#define fi first
#define se second
const int N=1e8+500;
int n,sum;char c[N];int cnt=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	f(i,1,n){
		char cc;int x;cin>>x>>cc;sum+=x;
		f(j,1,x)c[++cnt]=cc;
	}int ans=0;
	f(i,1,cnt/2){
		if(c[i]!=c[cnt+1-i])ans++;
	}cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}

