#include<bits/stdc++.h>
using namespace std;
const int N=6e6+100,M=2e5+10;
int n,m,a[N],tot[M],ans,l[M],r[M];
void dfs(int now=1073741823,int chose=0,int dep=1){
	if(chose+n-dep+1<m)  return;
	if(chose>m)  return;
	if(now<ans)   return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}else if(n==m+1){
		l[0]=r[n+1]=1073741823;
		for(int i=1;i<=n;i++){
			l[i]=l[i-1]&a[i];
		}
		for(int i=n;i>=1;i--){
			r[i]=r[i+1]&a[i];
		}
		for(int i=1;i<=n;i++){
			ans=max(ans,l[i-1]&r[i+1]);
		}
		cout<<ans;
		return 0;
	}
	return 0;
 } 