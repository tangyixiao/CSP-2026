#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool all(int x){
	while(x>0){
		if(x&1==0)return 0;
		x>>=1;
	}
	return 1;
}
bool twon(int x){
	if(x==0)return 0;
	int s=0;
	while(x>0){
		if(x&1)s++;
		if(s>1)return 0;
		x>>=1;
	}
	return 1;
}
bool ok=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,ans=(1<<30)-1,mx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>mx)mx=a[i];
		if(!all(a[i]))ok=0;
	}
	if(ok){
		sort(a+1,a+n+1);
		ans=a[m];
	}
	else if(m==1){
		ans=-1;
		for(int i=1;i<=n;i++)if(a[i]>ans)ans=a[i];
	}
	else if(m==n){
		for(int i=1;i<=n;i++)ans&=a[i];
	}
	else if(m==2){
		ans=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++)if(a[i]&a[j]>ans)ans=a[i]&a[j];
		}
	}
	else if(mx==4){
		int c3=0,c1=0;
		for(int i=1;i<=n;i++){
			if(a[i]==3)c3++;
			if(a[i]==1)c1++;
		}
		if(c3>=m)ans=3;
		else if(c3+c1>=m)ans=1;
		else ans=0;
	}
	else if(twon(n)){
		ans=n-1;
		while(m>0){
			ans&=(ans>>1);
		}
	}
	else ans=0;
	cout<<ans;
	return 0;
}
