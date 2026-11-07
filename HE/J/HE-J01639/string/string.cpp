#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	string w;
	for(long long i = 0;i<n;i++){
		int a;
		char b;
		cin>>a>>b;
		for(long long i = 1;i<=a;i++){
			s+=b;
		}
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	int j = s.length();
	for(long long i = 0;i<s.length();i++){
		w[j]=s[i];
		j--;
	}
	if(s==w){
		cout<<0;
	}
	
	cout<<w;
	int cnt = 0;
	for(long long i = 0;i<s.length()/2;i++){
		
		cnt++;
		if(s[i]==w[i]){
			cnt--;
		}
		s[i]=w[i];
	}
	cout<<cnt;
	return 0;
}
