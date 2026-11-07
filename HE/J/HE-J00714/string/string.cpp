#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	long long a;
	char c;
	for(int i = 1;i <= n;i++){
		cin>>a>>c;
		for(int j = 1;j <= a;j++){
			s += c;
		}
	}
	long l = 0,r = s.size()-1,ans = 0;
	while(l <= r){
		if(s[l] != s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
} 
