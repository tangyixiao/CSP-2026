#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int m;
	string s;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>s;
		if(s[i]==s[i+1]){
			cout<<"0";
		}
	}
	return 0;
} 
