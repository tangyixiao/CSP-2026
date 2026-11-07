#include<bits/stdc++.h>
using namespace std;
int t;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
	long long la=0;
	for(int i=1;i<=t;i++){
		long long num;
		cin>>num;
		char x;
		cin>>x;
		for(long long j=1;j<=num;j++){
			a[la++]=x;
		}
	}
	long long ans=0;
	for(long long i=0,j=la-1;i<=j;i++,j--){
		if(a[i]!=a[j]) ans++;
	}
	cout<<ans;
	return 0;
} 