#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200010];	
bool x_2[40],y_2[40],result2[40];
long long anweiyu(long long x,long long y){
	int cnt=0;
	while(x){
		x_2[++cnt]=x%2;
		x/=2;
	}
	int cnt2=0;
	while(y){
		y_2[++cnt2]=y%2;
		y/=2;
	}
	for(int i=1;i<=max(cnt,cnt2);i++){
		if(x_2[i]==y_2[i] && x_2[i]==1){
			result2[i]=1;
		}
		else result2[i]=0;
	}
	long long ans=0;
	for(int i=1;i<=max(cnt,cnt2);i++){
		if(result2[i]) ans+=pow(2,i-1);
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long mx=-1e18;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
		
	}
	if(m==1){
		cout<<mx;
	}
	if(m==2 && n!=m){
		long long mmx=-1e18;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mmx=max(mmx,anweiyu(a[i],a[j]));
			}
		}
		cout<<mmx<<' ';
	}
	if(n==m){
		long long sumy=anweiyu(a[1],a[2]);
		for(int i=3;i<=n;i++){
			sumy=anweiyu(sumy,a[i]);
		}
		cout<<sumy;
	}
	return 0;
}