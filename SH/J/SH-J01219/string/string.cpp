#include<bits/stdc++.h>
using namespace std;
string s;
bool f(string s){
	for(int i=0;i<s.size()/2+1;i++){
		if(s[i]!=s[s.size()-1]){
			return false;
		}
	}
	return true;
}
int a[26];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdin);
	int n,maxn=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		int q;
		char b;
		cin>>q>>b;
		a[b-'a']+=q;
		for(int j=1;j<=q;j++){
			s+=b;
		}
	}
	int cnt=0;
	for(int i=0;i<=s.size()/2;i++){
		if(s[i]!=s[n-i]){
			if(a[s[i]-'a']>a[s[n-i]-'a']){
				s[n-i]=s[i];
			}
			else {
				s[i]=s[n-i];
			}
			cnt++;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
