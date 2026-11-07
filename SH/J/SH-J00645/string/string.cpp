#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 +10;
int n;
string s;
// < 68pts
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		while(a--) s.push_back(c);
	}
	string rs = s;
	reverse(rs.begin(), rs.end());
	int m = s.size();
	long long ans = 0;
	for(int i = 0;i<(m>>1);i++){
//		cout<<s[i]<<' '<<rs[i]<<'\n';
		if(s[i] != rs[i]) ans ++;
	}
	cout<<ans;
	return 0;
}
