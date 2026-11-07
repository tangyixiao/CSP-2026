#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	char s[2050100];
	long long m;
	m=1;
	long long len=0;
	for(long long i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a;
		cin>>c;
		for(long long j=m;j<=m+a-1;j++){
			s[j]=c;
		}
		len+=a;
		m+=a;
	}
	long long l=1;
	long long r=len;
	long long ans=0;
	while(l<=r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
