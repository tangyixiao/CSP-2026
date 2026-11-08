#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
long long len;
long long ans;
int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long a;
		char b;
		cin>>a>>b;
		len+=a;
		for(long long j=0;j<a;j++){
			s+=b;
		}
	}
	long long len2=(len+1)/2;
	long long i=0,j=len-1;
	while(i<=len2 && j>=len2){
		if(s[i]!=s[j]) ans++;
		i++;
		j--;
	}
	cout<<ans;
	return 0;
}

