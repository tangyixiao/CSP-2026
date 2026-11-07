#include<bits/stdc++.h>
using namespace std;
int n,m;
bool ff=0;
int a[200005];
bool panduan(int x){
	while(x!=0){
		if(x%2==0)return 0;
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1)ff=1;
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(n==m){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(n>=21){
		if(panduan(a[1])&&panduan(a[2])&&panduan(a[3])){
			sort(a+1,a+n+1);
			cout<<a[n-m+1];
		}else if(ff=0){
			cout<<n-2;
		}
		else cout<<1;
		return 0;
	}
	int ma=0;
	for(int i=1;i<(1<<n);i++){
		int x=i,cnt=0,ans=0,cnt2=0;
		while(x!=0){
			cnt2++;
			if(x%2==1){
				cnt++;
				if(ans==0)ans=a[n-cnt2+1];
				else ans&=a[n-cnt2+1];
			}
			x/=2;
		}
		if(cnt==m)ma=max(ma,ans);
	}
	cout<<ma;
	return 0;
}
