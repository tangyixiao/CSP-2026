#include<bits/stdc++.h>
using namespace std;
int n,m,ans=INT_MAX,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}else if(m==n){
		for(int i=1;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}else if(m==2){
		ans=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(i!=j)ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}else{
		sort(a+1,a+n+1);
		for(int i=n;i>=n-m+1;i--)ans&=a[i];
		cout<<ans;
	}
}