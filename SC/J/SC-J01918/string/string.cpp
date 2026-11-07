#include<bits/stdc++.h>
#define int long long
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,l,r) for(int i=l;i>=r;i--)
#define pb push_back
#define ull unsigned long long
using namespace std;
const int N=2e5+5;
int n;
int a[N];
int s[N];
char c[N];
int col[N][30];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	rep(i,1,n){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
		rep(j,0,25)col[i][j]=col[i-1][j];
		col[i][c[i]-'a']=col[i-1][c[i]-'a']+a[i];
	}
	int ans=0;
	rep(i,1,n){
		int L=lower_bound(s+1,s+1+n,s[n]-s[i-1])-s;
		int R=lower_bound(s+1,s+1+n,s[n]-s[i]+1)-s;
//		cout<<L<<" "<<R<<"\n";
		if(L==R){
			if(c[L]!=c[i])ans+=a[i];
			continue;
		}
		if(c[L]!=c[i])ans+=s[n]-s[L-1]-s[i-1];
		L--;
		if(c[R]!=c[i])ans+=s[R]-(s[n]-s[i]+1)+1;
		R++;
		if(L<R)continue;
		rep(j,0,25){
			if(char(j+'a')==c[i])continue;
			ans+=col[L][j]-col[R-1][j];
		}
	}
	cout<<ans/2;
	return 0;
}
