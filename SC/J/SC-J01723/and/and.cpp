#include <iostream>//ceshiban
#include <algorithm>
#include <cmath>

using namespace std;
int n,m;
long long a[200005],sum,sm=-1e9-1;
void dfs(int nn,int mm,long long sum){//diji nn yixuan mm 
	if(nn==n+1&&mm==m||mm==m){
		sm=max(sum,sm);
		return;
	}
	if(nn==n+1)return;
	dfs(nn+1,mm+1,sum&a[nn]);
	dfs(nn+1,mm,sum);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			sum=1073741823;
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
//				cout<<sum<<' ';
				sum&=a[j];
			}
			sm=max(sum,sm);
//			cout<<sum<<'\n';
		}
		cout<<sm<<'\n'; 
	}else{
		dfs(1,0,1073741823);
		cout<<sm<<'\n';
	}
	return 0;
}