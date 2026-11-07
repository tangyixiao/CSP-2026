#include <bits/stdc++.h>
using namespace std;
int n;
int a;
char c;
string s="";

void hui(string s){
	int t=0;
	if(s.size()%2==0){
		t=s.size()/2;
	}
	else{
		t=s.size()-1 >> 1;
	}
	int cnt=0;
	for(int i=0;i<t;i++){
		if(s[i]!=s[s.size()-1-i])cnt++;
	}
	cout << cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a;
		cin >> c;
		while(a--){
			s+=c;
		}
	}
	hui(s);
	return 0;
} 
