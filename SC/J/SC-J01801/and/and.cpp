#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	long long n,m,k;
	bool f=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%2==0)f=0;
	}
	sort(a+1,a+1+n,greater<>());
	if(f){
		cout<<a[1]<<"\n";
		return 0;
	}
	k=a[1];
	if(m==1){
		cout<<a[1]<<"\n";
		return 0;
	}
	if(m==n){
		for(int i=2;i<=n;i++){
			k=k&a[i];
		}cout<<k<<"\n";
		return 0;
	}
	if(m==n-1){
		for(int i=2;i<n;i++){
			k=k&a[i];
		}cout<<k<<"\n";
		return 0;
	}
	if(m==2){
		long long ma=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				long long c=a[i]&a[j];
				ma=max(ma,c);
			}
		}cout<<ma<<"\n";
		return 0;
	}
	if(a[1]<4){
		int b[5]={0};
		for(int i=1;i<=n;i++){
			b[a[i]]++;
		}
		if(m<=b[3]){
			cout<<3<<"\n";
			return 0;
		}
		else if(m<=b[3]+b[2]){
			cout<<2<<"\n";
			return 0;
		}
	}
	cout<<0<<"\n";
	return 0;
}