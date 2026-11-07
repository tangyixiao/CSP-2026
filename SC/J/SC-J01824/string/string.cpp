#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	long long n,k = 0;
	string s = "",s1 = "",s2 = "";
	cin>>n;
	for(long long i = 1;i <= n;i++){
		int a;
		string c;
		cin>>a>>c;
		for(unsigned long long j = 1;j <= a;j++){
			s += c;
		}
	}
	for(long long i = 0;i < s.size() / 2;i++){
		s1 += s[i];
	}
	for(long long i = s.size();i > s.size() / 2;i--){
		s2 += s[i];
	}
	for(long long i = 0;i < s.size() / 2;i++){
		if(s1[i] != s2[i]) k++;
	}
	cout<<k;
	return 0;
}