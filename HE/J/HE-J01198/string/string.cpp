#include <bits/stdc++.h>
using namespace std;
long long const C=1e5*2+10;
long long n;
long long a[C];
string s;
char c[C];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		cin>>c[i];
		for(long long j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	long long cnt=0;
	for(long long i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-1-i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
