#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long b[1000000008];
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>b[i]>>s[i];
	}
	string p;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=b[i];j++){
			p+=s[j];
		}
	}
	int d=0;
	int f=0;
	int m=0;
	for (int i=1;i<=n;i++){
		d+=b[i];
	}
	for (int i=1;i<=n-1;i++){
		p[i]==p[i+1];
		f++;
		if (f==n){
			cout<<0;
		}
		
		if (p[i]!=p[i+1]){
			m++;
		}
	
	}
	if (p.size()%2!=0){
		cout<<m-1;
	}
	else {
		cout<<m;
	}
	return 0;
} 