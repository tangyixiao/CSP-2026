#include<bits/stdc++.h>
using namespace std;
long long n,m,ma,a[200005];
bool ch(long long i){
	while(i){
		if(i%2==0){
			i/=2;
		}
		else{
			return 0;
		}
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			long long ai;
			cin>>ai;
			ma=max(ma,ai);
		}
		cout<<ma;
		return 0;
	}
	else if(m=2){
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
		return 0;
	}
	else if(m==n){
		cin>>a[1];
		long long an=a[1];
		for(int i=2;i<=n;i++){
			cin>>a[i];
			an=an&a[i];
		}
		cout<<an;
		return 0;
	}
	else if(m==n-1){
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++){
			long long an=a[1];
			for(int j=1;j<=n;j++){
				if(j!=i){
					an=an&a[j];
				}
			}
			ma=max(ma,an);
		}
		cout<<ma;
		return 0;
	}
	bool b=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(!ch(a[i])){
			b=0;
			break;
		}
	}
	sort(a+1,a+1+n); 
	if(b) cout<<a[n-m+1];
	else cout<<0;
	return 0;
}
