#include<bits/stdc++.h>
using namespace std;
long long n,u,ans;
char c;
string s,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> u >> c;
		for(int j = 1;j <= u;j++){
			s+=c;
		}
	}
	for(int i = 0;i < s.size();i++){
//		
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}