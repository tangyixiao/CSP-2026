#include <bits/stdc++.h>
using namespace std;
long long n,b;
long long c[1000000005];
long long a1[200005];
string a2[200005];
string s;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a1[i] >> a2[i];
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<a1[i];++j){
			s += a2[i];
		}
	}
	for(int i=1;i<= (s.size() + 1)/ 2;i++){
		if(s[i-1] == s[s.size() - i]){
			c[i-1] = 1;
			//c[s.size() - i] = 1;
		}
	}
	//cout << s;
	for(int i=1;i<= (s.size()+1) / 2;i++){
		if(c[i] == 0){
			s[i-1] = s[s.size()  - i];
			ans += 1;
		}
	}
	//cout << s.size() << ' ';
	cout << ans;
	return 0;
}

