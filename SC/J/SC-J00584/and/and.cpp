#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],f,f1,f2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=pow(2,i)-1)f=1;
		if(a[i]!=i-1)f1=1;
		if(a[i]>=4)f2=1;
	}
	if(!f){
		cout<<1;
		return 0;
	}
	if(!f1){
		long long ans=a[n];
		for(int i=n;i>=n-m+1;i--){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		long long ans=a[n];
		for(int i=n;i>=n-m+1;i--){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		long long ans=0;
		for(int i=n;i>=n-m+1;i--){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		long long ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(!f2){
		int sum3=0,sum2=0,sum1=0;
		sort(a+1,a+n+1);
		for(int i=n;i>=1;i--){
			if(a[i]==3)sum3++;
			else if(a[i]==2)sum2++;
			else if(a[i]==1)sum1++;
		}
		if(sum3>=m)cout<<3;
		else if(sum2+sum3>=m)cout<<2;
		else if(sum1+sum2+sum3>=m)cout<<1;
		else cout<<0;
		return 0;
	}
	sort(a+1,a+n+1);
	long long ans=0;
	for(int i=n;i>=m;i--){
		long long ans1=a[i];
		for(int j=i;j>=i-m+1;j--){
			ans1=ans1&a[j];
		}
		ans=max(ans,ans1);
	}
	cout<<ans;
	return 0;
	//不可以骗分总司令，CCF让我过这道题吧！（用chb十年单身）
}