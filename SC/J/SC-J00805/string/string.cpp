//string
#include<bits/stdc++.h>
using namespace std;

string s;
unsigned long long tl;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	unsigned long long l, n;
	string sub;
	cin>>l;
	for(unsigned long long i=0; i<l; i++) {
		cin>>n>>sub;
		tl+=n;
		for(unsigned long long i=0; i<n; i++) s+=sub;
	}
	
	unsigned long long cnt=0;
	
	for(unsigned long long i=0; i<tl/2; i++) {
		//cout<<s[i]<<s[tl-i]<<endl;
		if(s[i] != s[n-i]) {
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
//