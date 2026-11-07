#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=a[0];
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	if(m==n){
		if(n==1){
			cout<<a[0];
			return 0;
		}else{
			ans=a[0]&a[1];
			for(int i=2;i<n;i++)ans&=a[i];
		}
	}else if(m==1){
		ans=a[0];
		for(int i=1;i<n;i++)ans=max(ans,a[i]);
	}else if(m==2){
		ans=a[0]&a[1];
		for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)ans=max(ans,a[i]&a[j]);
	}
	cout<<ans;
	return 0;
}
