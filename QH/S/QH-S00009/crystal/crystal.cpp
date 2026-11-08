#include<bits/stdc++.h>
using namespace std;

int n,ans,mx;
long long m,a[100010],b[100010],w;

int main(){
	freopen("crystal.in","r",stdin);
	freopen("crystal.out","w",stdout);
	
	cin >>n >>m;
	mx=0;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	if(a[n]*(n-1)<=m) {
		cout <<n;
		return 0;
	}
	for(int i=n;i>=1;i--){
		b[i]=a[i];
		ans=0;
		w=m;
		for(int j=i;j>=1;j--){
			if(a[j]+w>=a[i]){
				w-=a[i]-a[j];
				b[j]=a[i];
			}else break;	
		}
		for(int j=1;j<=n;j++){
			if(b[j]==a[i]) {
				ans++;
			}
		}
		if(ans==n) {
			cout <<n;
			return 0;
		}
		if(mx<=ans) mx=ans;
	}
	
	cout <<mx; 
	
	return 0;
} 
