#include<bits/stdc++.h>
using namespace std;
int n, x;
char y;
string s;
int main(){// 68
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>x>>y;
		while(x--) s+=y;
	}
	long long len=s.length()-1, ans=0;
	if(len%2){
		for(long long i = 0;i<len/2;i++){
			if(s[i]!=s[len-i]){
				ans++;
			}
		}
	}else{
		for(long long i = 0;i<len/2;i++){
			if(s[i]!=s[len-i]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
