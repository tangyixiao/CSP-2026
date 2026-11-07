#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=0,sum=0;
	cin>>n;
	string s;
	for(long long i=1;i<=n;i++){
		long long a;
		cin>>a;
		l+=a;
		char c;
		cin>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}
	for(long long i=0;i<l/2;i++){
		if(s[i]!=s[l-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}