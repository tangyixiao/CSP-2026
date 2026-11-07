#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
ll n,k;
ll a[N],maxn=-1;
void dfs(int m,int step,ll sum){
	if(sum<=maxn||step>n)return;
	if(m==k)maxn=max(maxn,sum);
	//cout<<m<<" "<<step<<' '<<sum<<"\n";
	dfs(m,step+1,sum);
	dfs(m+1,step+1,(m==0)?a[step]:sum&a[step]);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&k);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	dfs(0,1,0);
	cout<<maxn;
	return 0;
}