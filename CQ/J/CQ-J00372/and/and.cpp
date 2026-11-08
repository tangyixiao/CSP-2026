#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define f(i,x,y) for(int i=x;i<=y;++i)
#define ff(i,x,y) for(int i=x;i>=y;--i)
#define gcd(x) __gcd(x)
#define fi first
#define se second
const int N=2e5+5; 
int a[N],n,m,dp[N],b[N],t[N];
bool f1,f2;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m;
	f(i,1,n)cin>>a[i];
	sort(a+1,a+1+n);
	if((n&n-1)==0&&a[n]==n-1&&a[1]==0){
		cout<<n-m;
		return 0;
	}if(a[n]&a[n]-1==0&&a[2]&a[2]-1==0&&a[3]&a[3]-1==0){
		cout<<a[n-m+1];
		return 0;
	}
	dp[1]=a[n];b[n]=1;
	f(i,2,m){
		memset(t,-1,sizeof(t));
		f(j,1,n){
			if(!b[j])t[j]=dp[i-1]&a[j];
		}int m=-1,mj;f(j,1,n)if(m<t[j]){m=t[j];mj=j;}
		dp[i]=m;b[mj]=1;
	}
	cout<<dp[m];
	fclose(stdin);fclose(stdout);
	return 0;
}
