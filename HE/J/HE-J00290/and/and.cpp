#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],e=1,ans,w[10],p=1,q=1;
bool cmp(int a,int b){
	return a>b;
}
bool cmp2(int a,int b){
	return a<b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%2==0) p=0;
		if(a[i]!=i-1) q=0;
		ans=max(ans,a[i]);
		if(a[i]<4) w[a[i]]++;
	} 
	if(m==1) cout<<ans;
	else if(ans<4){
		if(w[3]>=m) cout<<3;
		else if(w[3]+w[2]>=m&&w[3]!=0) cout<<2;
		else if(w[2]>=m) cout<<2;
		else cout<<1;
	}else if(p==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}else if(q==1){
		cout<<a[n-m+1];
	}else if(m==2){
		sort(a+1,a+n+1,cmp);
		cout<<a[2];
	}else if(m==n){
		for(int i=1;i<=n;i++){
			e=e&&a[i];
		}
		cout<<e;
	}else if(m==n-1){
		sort(a+1,a+1+n,cmp2);
		for(int i=2;i<=n;i++) e=e&&a[i];
		cout<<e;
	}else{
		sort(a+1,a+n+1,cmp);
		for(int i=1;i<=m;i++){
			e=e&&a[i];
		}
		cout<<e;
	}
	
	return 0;
}
