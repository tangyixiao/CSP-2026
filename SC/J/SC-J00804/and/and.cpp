#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],maxx=-1,minn=INT_MAX;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int f=0,f2=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) f=1;
		if(a[i]>4) f2=1;
		maxx=max(a[i],maxx);
		minn=min(a[i],minn);
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	else if(m==1){
		cout<<maxx;
	}
	else if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else if(m=n-1){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			if(a[i]!=minn) ans&=a[i];
		}
		cout<<ans;
	}
	else if(f==0){
		int n1=n,num=0;
		while(n1>0){
			n1/=2;
			num++;
		}
		if(num>m){
			cout<<pow(2,num-m)-1;	
		}
	}
	else {
		sort(a+1,a+n+1);
		cout<<a[n-m+2];
	}
	return 0;
}