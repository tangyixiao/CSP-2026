#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int aa;
	cin>>aa;
	string s;
	for(int i=1;i<=aa;i++){
		long long a;
		char b;
		cin>>a>>b;
		for(int j=1;j<=a;j++) s+=b;
	}
	long long n=s.size(),m=0;
	for(int i=0;i<=n/2;i++){
		if(s[i]!=s[n-i-1]){
			m++;
		}
	}
	cout<<m;
	return 0;
}
