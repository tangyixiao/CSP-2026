#include<bits/stdc++.h>
using namespace std;
long long n,sum;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long j=1;j<=n;j++){
		long long a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	long long len=s.size();
	for(long long i=0,j=len-1;i<len/2;i++,j--){
		if(s[i]!=s[j])sum++;
	}
	cout<<sum;
	return 0;
}