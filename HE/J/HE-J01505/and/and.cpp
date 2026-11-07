#include<bits/stdc++.h>
using namespace std;
long long a[200005],ans,amax;
int n,m;
void solve(long long an,int t,int l){
	if(l<=0){
		if(an>ans) ans=an;
		return;
	}
	for(int i=t;i<=n;i++){
		solve(an&a[i],i+1,l-1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>amax) amax=a[i];
	}
	if(m==1){
		cout<<amax; return 0;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans; return 0;
	}else if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				long long an=a[i]&a[j];
				if(an>ans) ans=an;
			}
		}
		cout<<ans; return 0;
	}else if(m==n-1){
		for(int i=1;i<=n;i++){
			long long an;
			if(i==1) an=a[2];
			else an=a[1];
			for(int j=2;j<=n;j++) if(i!=j) an=an&a[j];
			if(an>ans) ans=an;
		}
		cout<<ans; return 0;
	}else if(n<=20){
		for(int i=1;i<=n;i++){
			solve(a[i],i+1,m-1);
		}
		cout<<ans; return 0;
	}else if(a[n-1]==n-2){
		cout<<n-m; return 0;
	}else{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
