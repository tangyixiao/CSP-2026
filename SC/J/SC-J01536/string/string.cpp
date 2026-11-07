#include<bits/stdc++.h>
using namespace std;
int n,ans,len;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1; i <= n; i++){
		int x;
		char a;
		cin>>x>>a;
		len +=x;
		for(int i = 1; i<= x ; i++){
			s += a;
		}
	}
	long long l = 0,r = len-1;
	while(l<=r){
		if(s[l] != s[r]) ans++;
		l++;
		r--;
	}
	cout<<ans;
} 