#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,m,a[N],ans,mx=0;
int ass[N][35];
ll cmd(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n,cmd);
	for(int i=1;i<=n;i++){
		for(int j=30;j>=0;j--){
			ass[i][j]=ass[i-1][j];
			if(a[i]>=(1<<j)){
				ass[i][j]+=1;
				a[i]-=(1<<j);
			}
			//cout<<ass[i][j]<<' ';
		}
		//cout<<endl;
	}
	for(int i=1;i<=n-m;i++){
		ans=0;
		for(int j=30;j>=0;j--){
			if(ass[i+m-1][j]-ass[i-1][j]==m){
				ans+=(1<<j);
			}
			//cout<<ass[i+m-1][j]<<' '<<ass[i-1][j]<<' ';
		}
		//cout<<ans<<' '<<i<<endl;
		mx=max(ans,mx);
	}
	cout<<mx;
	return 0;
}