#include<bits/stdc++.h>
using namespace std;
long long num[200005],ans=0,mmm=0,lastmax,numand[200005];
int n,m;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m>>num[1];
	numand[1]=num[1];
	for(int i=2;i<=n;++i){
		cin>>num[i];
		mmm=max(mmm,num[i]);
		numand[i]=numand[i-1]&num[i];
	}
	if(m==1){
		cout<<mmm<<'\n';
		return 0;
	}
	if(m==n){
		cout<<numand[n]<<'\n';
		return 0;
	}
	if(m==2){
		for(int i=2;i<=n;++i){
			for(int j=1;j<i;++j)ans=max(ans,num[i]&num[j]);
		}
		cout<<ans;
		return 0;
	}
	ans=mmm;
	lastmax=mmm;
	for(int i=2;i<=m;++i){
		long long mmax=0;
		bool flag=1;
		for(int j=1;j<=n;++j){
			if((num[j]==lastmax) && flag){
				num[j]=0;
				flag=0;
			}
			mmax=max(mmax,num[j]);
		}
		ans&=mmax;
		lastmax=mmax;
	}
	cout<<ans<<'\n';
	return 0;
} 