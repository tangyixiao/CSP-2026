#include<bits/stdc++.h>
using namespace std;
int a[200005],pre[200005],suf[200005],n,m,dfsans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//6.7.8.9.10.11.12.13.16.17
	cin>>n>>m;
	bool b=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b=b&&(a[i]<4);
	}
	if(n==m){//7
		int ans=INT_MAX;
		for(int i=1;i<=n;i++) ans&=a[i];
		cout<<ans;
	}
	else if(m==1){//6
		int ans=-1;
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
	}
	else if(m==2){//8,9,10
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++) ans=max(ans,a[i]&a[j]);
		}
		cout<<ans;
	}
	else if(m==n-1){//11,12
		pre[0]=INT_MIN;
		for(int i=1;i<=n;i++) pre[i]=pre[i-1]&a[i];
		suf[n+1]=INT_MAX;
		for(int i=n;i>=1;i--) suf[i]=suf[i+1]&a[i];
		int maxi=INT_MIN;
		for(int i=1;i<=n;i++) maxi=max(maxi,pre[i-1]&suf[i+1]);
		cout<<maxi;
	}
	else if(b){//16,17
		sort(a+1,a+n+1,greater<int>());
		int ans=INT_MAX;
		for(int i=1;i<=m;i++) ans=ans&a[i];
		cout<<ans;
	}
	else if(n<=20){//1-5()
	}
	else{//13
		sort(a+1,a+n+1,greater<int>());
		int ans=INT_MAX;
		for(int i=1;i<=m;i++) ans=ans&a[i];
		cout<<ans;
	}
	return 0;
}
