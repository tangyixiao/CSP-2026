#include<bits/stdc++.h>
#define int long long
using namespace std;
unsigned long long n,a,sum=0,cnt=0,ans=0;
string s;
char d;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a>>d;
		for(int j=0; j<a; j++) {
			s[j+ans]=d;
		}cnt+=a;
		ans=a;
	}
	for(int i=0; i<cnt; i++) {
		if(s[i]!=s[cnt-i])
		sum+=1;	
		s[cnt-i]=s[i];
		
	}
	cout<<sum-1;
	return 0; 
}
