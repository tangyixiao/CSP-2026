#include <bits/stdc++.h>
#define int long long
using namespace std;
long long n,m,a[200005],dp[200005],s[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	s[0]=a[1];
	if(m==n){
		for(int i=1;i<=n;i++){
			s[i]=s[i-1]&a[i];
		}
		cout<<s[n];
	} 
	if(m==1){
		int mx=0;
		for(int i=1;i<=n;i++) mx=max(mx,a[i]);
		cout<<mx;
	}
	if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)
				mx=max(mx,a[i]&a[j]);
		}
		cout<<mx;
	}else{
		for(int i=1;i<=m;i++) 
			s[i]=s[i-1]&a[i];
		cout<<s[m];
	}
	fclose(stdin);
	fclose(stdout);
}
