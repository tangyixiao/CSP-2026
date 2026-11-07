#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	unsigned long long n,cnt=0;
	cin >> n;
	unsigned long long a[n+1];
	char c[n+1];
	string s="",s2;
	for(int i=0;i<n;i++){
		cin >> a[i] >> c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-1-i]){
			s[s.size()-1-i]=s[i];
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
