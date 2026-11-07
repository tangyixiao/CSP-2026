#include <bits/stdc++.h>
using namespace std;
string a;
long long c=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	freopen("string5.in","r",stdin);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long tint;
		char tchr;
		cin>>tint>>tchr;
		for(long long j=1;j<=tint;j++){ a+=tchr; }
	}
	long long L=0,R=a.size()-1;
	while(L<R){
		if(a[L]!=a[R]){ c+=1; }
		L++; R--;
	}
//	cout<<a<<"/\n";
	cout<<c;
	return 0;
}
// aabbc
// aabaa		
				
		
	
	
