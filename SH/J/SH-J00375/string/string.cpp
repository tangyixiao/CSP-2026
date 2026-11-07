#include <bits/stdc++.h>
using namespace std;
long long n,a,cnt;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> c;
		for(int j=0;j<a;j++){
			s+=c;
		} 
	}
	for(size_t i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
