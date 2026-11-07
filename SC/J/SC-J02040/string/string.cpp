#include <bits/stdc++.h>
using namespace std;
long long n,ans=0,p;
string a; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long j;
		char x;
		cin>>j>>x;
		p+=j;		
		for(long long m=1;m<=j;m++){
			a+=x; 
		}
	} 
	
	
	long long l=0,r=p-1;
	while(l<=r){
		if(a[l]!=a[r]){
			ans++;
		}
		l++;
		r--;
	} 
	cout<<ans;
	return 0;
} 