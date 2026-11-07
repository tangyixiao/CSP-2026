#include<bits/stdc++.h> 
#include<iostream> 
#include<cstdio> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,s1;
	int n;
	int a = 0,a1;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a1>>s1;
		a = a + a1;
		string s2 = s1;
		for(int j = 1;j<a1;j++){
			s2 = s2 + s1;
		}
		s = s + s2;
	}
	int ans = 0;
	for(int i = 1;i<=a/2;i++){
		if(s[i-1]!=s[a-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
