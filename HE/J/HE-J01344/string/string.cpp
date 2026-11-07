#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(long long i=0;i<n;i++){
		cin >> a >> c;
		for(long long j=0;j<a;j++){
			s+=c;
		}
	}
	for(long long i=0;i<s.size();i++){
		if(s[s.size()-i-1]!=s[i]) cnt++;
	}
	cout << cnt/2;
	return 0;
} 
