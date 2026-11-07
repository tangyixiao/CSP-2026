#include<bits/stdc++.h>
using namespace std;
int m,n,a[200010],ans;
string s[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}else if(m==n-1){
		sort(a+1,a+1+n);
		ans=a[2];
		for(int i=3;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}
	sort(a+1,a+1+n);
	while(a[1]>0){
		if(a[1]%2==1){
			return 0;
		}
		a[1]/=2;
	}
	cout<<a[n+1-m];
	return 0;
}