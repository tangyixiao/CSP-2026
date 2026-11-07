#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,i=1,aok=1,x1=0,x2=0,x3=0;
	cin>>n>>m;
	long long ans;
	while(i<=n){
		cin>>a[i];
		if(a[i]>3)aok=0;
		if(a[i]==1)x1++;
		if(a[i]==2)x2++;
		if(a[i]==3)x3++;
		i++;
	}
	if(m==n){
		i=2,ans=a[1];
		while(i<=n){
			ans&=a[i];
			i++;
		} 
		cout<<ans;
		return 0;
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==2){
		i=1;
		long long mx=0;
		while(i<=n){
			int j=i+1;
			while(j<=n){
				ans=a[i]&a[j];
				mx=max(mx,ans);
				j++;
			}
			i++;
		}
		cout<<mx;
		return 0;
	}
	if(aok){
		if(x3>=m)cout<<3;
		else if(x2+x3>=m)cout<<2;
		else if(x3+x1>=m)cout<<1;
		else cout<<0;
		return 0;
	}
	i=1;
	ans=a[n];
	while(i<m){
		ans&=a[n-i];
		i++;
	}
	cout<<ans;
	return 0;
}
//RP++