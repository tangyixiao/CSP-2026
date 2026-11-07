#include<bits/stdc++.h>
using namespace std;
int dp[3099][3099],n,m,a[3099],mn[3099],nm[3099],x[5],xx;
int dp_2000(){
	int b;
	for(int i=1;i<=n;i++){
		b=max(b,a[i]);
		dp[i][1]=b;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=i;j++){
			dp[i][j]=max(dp[i-1][j-1]&a[i],dp[i-1][j]);
		}
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nm[i]=a[i]&nm[i-1];
		if(i==1) nm[1]=a[1];
		if(a[i]>4) xx=1;
		else       x[a[i]]++;
	}
	for(int i=n;i>=1;i--){
		mn[i]=a[i]&mn[i+1];
		if(i==n) mn[n]=a[n];
	}
	if(n-m==1){
		int ans=0;
		for(int i=1;i<=n;i++){
			ans=max(nm[i-1]&mn[i+1],ans);
			cout<<nm[i-1]<<' '<<mn[i+1]<<endl;
		}
		//cout<<nm[n-1]<<' '<<mn[2]<<' '<<ans;
		cout<<max(max(nm[n-1],mn[2]),ans);
		return 0;
	}
	if(m==2){
		int ma=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j) ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
		return 0;
	}
	if(n<=2000 and m!=2){
		dp_2000();
		cout<<dp[n][m];
		return 0;
	}
	if(!xx){
		if(x[4]>=m){
			cout<<4;
			return 0;
		}
		if(x[3]>=m){
			cout<<3;
			return 0;
		}
		if(x[2]+x[3]>=m){
			cout<<2;
			return 0;
		}
		if(x[1]+x[3]>=m){
			cout<<1;
			return 0;
		}
		cout<<0;
		return 0;
	}
	sort(a+1,a+1+n);
	cout<<a[m];
}
