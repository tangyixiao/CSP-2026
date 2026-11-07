#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string a;
	cin>>n;
	long long ans=0;
	if(n>=1000000000){
		for(int i=1;i<=n;i++){
			long long m;
			char b;
			cin>>m;
			cin>>b;
			if(a[a.size()-1]!=b){
				ans+=m;
				a+=a[a.size()-1];
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		long long m;
		cin>>m;
		char b;
		cin>>b;
		for(long long i=1;i<=m;i++){
			a+=b;
		}
	}
		for(long long i=0;i<(a.size()/2);i++){
		if(a[i]!=a[a.size()-i-1]){
			a[a.size()-i-1]=a[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
