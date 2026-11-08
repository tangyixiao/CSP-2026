#include<bits/stdc++.h>
using namespace std;

int n, m;
long long cnt=0;
char c; 
string s="";

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i=0; i<n; i++){
		scanf("%d %c", &m, &c);
		for(int j=m; j>0; j--) s+=c;
	}
	
	for(int i=(int)ceil(s.size()/2.0); i<s.size(); i++){
		if(s[i]!=s[s.size()-i-1]) cnt++;
	}
	
	cout << cnt;
	
	return 0;
} 
