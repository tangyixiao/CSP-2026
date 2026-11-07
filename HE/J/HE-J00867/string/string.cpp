#include<bits/stdc++.h>
using namespace std;
int n,ans,tot;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	for(int i = 1;i<=n;i++){
		int x;
		char c;
		cin >>x>>c;
		int j = 0;
		while(x){
			s+=c;
			tot++;
			x--;
		}
	}
	for(int i = 0;i<(s.size()+1)/2;i++){
		if(s[i]!=s[s.size()-1-i]) ans++;
	}
	cout <<ans;
}
