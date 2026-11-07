#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long ans,n,m,sum,a[N],s[N],ma;
bool A=true,B=true;
void dfs(long long step,long long start,long long lsum){
	if(step>m){
		ans=max(ans,lsum);
		return ;
	}
	for(int i=start;i<=n;i++){
		long long nsum=lsum&a[i];
		dfs(step+1,i+1,nsum);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	cin>>a[1];
	s[1]=a[1];
	ma=a[1];
	if(a[1]&(a[1]+1)!=0)A==false;
		if(a[1]!=0)B=false;
	for(int i=2;i<=n;i++){
		cin>>a[i];
		if(a[i]&(a[i]+1)!=0)A==false;
		if(a[i]!=i-1)B=false;
		ma=max(ma,a[i]);
		s[i]=s[i-1]&a[i];
	}
	if(m==n){
		ans=s[n];
	}else if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}else if(m==1){
		ans=ma;
	}else if(m==n-1){
		for(int i=1;i<=n;i++){
			long long lin;
			if(i==1){
				lin=a[2];
			}else lin=a[1];
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				lin=lin&a[j];
			}
			ans=max(lin,ans);
		}
	}else if(A){
		sort(a+1,a+n+1);
		ans=a[n-m+1];
	}else if(B){
		ans=n-m;
	}else {
		for(int i=1;i<=n;i++){
			dfs(1,i,a[i]);
		}
	}
	cout<<ans;
	return 0;

}
