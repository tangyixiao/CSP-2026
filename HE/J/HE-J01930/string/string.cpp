#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	string c;
	string s;
	for(int i = 1;i <= n;i++){
		cin>>a;
		getline(cin,c);
		for(int i = 1;i <= a;i++){
			s += c;
		}
	}
	string s1;
	for(int i = 0;i < s.size();i++){
		if(s[i] !=  ' '){
			s1 += s[i];
		}
	}
	string s2;
	int l = s1.size();
	for(int i = l-1;i >= 0;i--){
		s2 += s1[i];	
	}
	int sum = 0;
	for(int i = 0;i < l / 2;i++){
		if(s2[i] != s1[i]){
			sum++;
		}
	}
	cout<<sum; 
	return 0;
}
