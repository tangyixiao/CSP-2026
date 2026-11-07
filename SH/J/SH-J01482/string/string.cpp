
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	unsigned long long n,l=0,ans=0;
	cin>> n;
	for(unsigned long long i=0;i<n;i++){
		unsigned long long sum;
		char m;
		cin >> sum;
		cin >> m;
		for(unsigned long long j=l;j<=l+sum;j++){
			s[j]=m;
		}
		l += sum;
	}
	for(unsigned long long i=0;i<=l/2;i++)
	if(s[i]!=s[l-i]){
		s[i]=s[l-i]; 
		ans++;
	}
	cout<< s;
	cout << ans;
	return 0;	
}
