#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	string a;
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long b;
		char c;
		cin>>b>>c;
		for(long long j=1;j<=b;j++){
			a+=c;
		}
	}
	long long cnt=0,f=0;
	if(a.size()%2==1){
		f=1;
	}
	for(long long i=0,j=a.size()/2+f;i<=a.size()/2&&j<a.size();i++,j++){
		if(a[i]!=a[j]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
