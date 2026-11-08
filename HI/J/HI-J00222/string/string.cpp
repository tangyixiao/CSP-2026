#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("strig.in","r",stdin);
	freopen("string .out","w",stdout);
	long long a;cin>>a;
	string o;
	for(long long i=1;i<=a;i++){
		long long b;
		char c;
		cin>>b>>c;
		for(long long j=1;j<=b;j++) o+=c;
	}
	long long m=0,n=o.size()-1,k=0;
	while(m<n){
		if(o[m]!=o[n]) k++;
		m++;
		n--;
	}
	cout<<k;
	return 0;
}
