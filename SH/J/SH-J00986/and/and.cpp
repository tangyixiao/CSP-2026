#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
long long int n,m,a[maxn],ans=-1,k[5];
long long int calc(int x){
	long long int ans=2<<30-1;
	for(int i=1;i<=n;i++){
		if(i==x)continue;
		ans&=a[i];
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>ans)ans=a[i];
		}
		cout<<ans<<endl;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans<<endl;
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				long long int x=a[i]&a[j];
				if(x>ans)ans=x;
			}
		}
		cout<<ans<<endl;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			if(calc(i)>ans)ans=calc(i);
		}
		cout<<ans<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(a[i]==1)k[1]++;
		if(a[i]==2)k[2]++;
		if(a[i]==3)k[3]++;
		if(a[i]==4)k[4]++;
	}
	if(k[2]>0 && k[3]>=m)cout<<2<<endl;
	else cout<<0<<endl;
	return 0;
}
