#include<bits/stdc++.h>
using namespace std;
string s;
char c1,max_c;
int n,m,max_m=0;
bool check(string s){
	string cs;
	for(int i=0;i<s.size();i++){
		cs+=s.size()-i-1;
	}
	if(cs==s) return 1;
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >> m;
		cin >> c1;
		if(m>max_m){
			max_m=m;
			max_c=c1;
		}
		for(int j=1;j<=m;j++){
			s+=c1;
		}
	}
	if(check(s)){
		cout << 0;
		return 0;
	}
	int cnt=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=max_c){
			cnt++;
		}
	}
	cout << cnt;

	
	
	return 0;
}

