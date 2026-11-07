#include<bits/stdc++.h>
using namespace std;
long long m,n,a[1000000],b[1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		long long s=0;
		for(long long i=1;i<=n;i++){
			cin>>a[i];
			s=max(s,a[i]);
		}
		cout<<s;
		return 0;
	}
	if(m==2){
		long long s=0;
		for(long long i=1;i<=n;i++){
			cin>>a[i];
		}
		for(long long i=1;i<n;i++){
			for(long long j=i+1;j<=n;j++){
				s=max(a[i]&a[j],s);
			}
		}
		cout<<s;
		return 0;
	}
	for(long long i=1;i<=n;i++){
			cin>>a[i];
	}
	cout<<a[n];
	return 0;
}