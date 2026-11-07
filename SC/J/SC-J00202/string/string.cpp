#include <bits/stdc++.h>
using namespace std;
string s;
long long n;
long long z=1,w=1,q=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		for(long long j=1;j<=a;j++){
			s[z]=b;
			z++;
		}
	}
	for(long long i=1;i<=z/2;i++){
		if(s[w]!=s[z-w])q++;
		w++;
	}
	cout<<q;
	return 0;
} 
