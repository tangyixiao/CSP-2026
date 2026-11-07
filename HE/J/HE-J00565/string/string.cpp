#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string1.in","r",stdin);
	freopen("string1.ans","w",stdout);
	long long n,y=0;
	string a;
	cin>>n;
	for(long long i=1;i<=n;i++){
		int t;
		cin>>t;
		y+=t;
		char x;
		cin>>x;
		for(long long j=1;j<=t;j++) a+=x;
	}
	long long ans=0;
	for(long long i=0;i<y/2;i++){
		if(a[i]!=a[y-i-1])  ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
