#include<bits/stdc++.h>
using namespace std;
long long a[35],f[200005][35],n,m,ans,aa[200005];
int f1[200005],f2;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    a[0]=1;
	for(int i=1;i<=30;i++)a[i]=a[i-1]*2;
	cin>>n>>m;
	if(m==n){
		for(int i=1;i<=n;i++)cin>>aa[i];
		for(int i=2;i<=n;i++){
			aa[i]=aa[i-1]&aa[i];
		}
		cout<<aa[n];
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++)cin>>aa[i];
		sort(aa+1,aa+n+1);
		cout<<aa[n];
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)cin>>aa[i];
		sort(aa+1,aa+n+1);
		int aaa=aa[n]&aa[n-1];
		cout<<aaa;
		return 0;
	}
/*	for(long long i=1,x;i<=n;i++){
		cin>>x;
		for(int j=30;j>=0;j++){
			if(x>=a[j]){
			f[i][j]=1;x-=a[j];}
		}
	}
	for(int i=30;i>=0;i--){
		long long s=0;
		for(int j=1;j<=n;j++){
			if(f2=0){
				if(f[j][i])s++;
				f1[j]=1;
			}
			else{
			 if(f1[j]==1){
				if(f[j][i])s++;
			}
			if(f[j][i]==0&&s>=m)f[i][j]==0;
			}
		}
		if(f2==1&&s>=m)ans+=a[i];
		if(s>=m&&f2==0){ans+=a[i];f2=1;}
	}*/
	for(int i=1;i<=n;i++)cin>>aa[i];
	sort(aa+1,aa+n+1);
	for(int i=n-1;i>=n-m;i--)ans+=ans&aa[i];
	cout<<ans;
	return 0;
}
