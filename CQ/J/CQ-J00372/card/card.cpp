#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define f(i,x,y) for(int i=x;i<=y;++i)
#define ff(i,x,y) for(int i=x;i>=y;--i)
#define gcd(x) __gcd(x)
#define fi first
#define se second
const int N=1e6+5;
int n,m,a[N],cnt=0;map<int,int>mp;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m;
	f(i,1,n){
		int x;
		cin>>x;
		mp[x]++;
	}
	for(auto it:mp)a[++cnt]=it.se;
	f(i,2,cnt)a[i]+=a[i-1];
	f(i,1,cnt)cout<<a[i]<<' ';
	fclose(stdin);fclose(stdout);
	return 0;
}
