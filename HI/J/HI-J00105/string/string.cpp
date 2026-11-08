#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
 	
 	int n,c;
 	string a,b;
 	string s,m;
 	cin >> n;
 	for(int i=0;i<n;i++){
 		cin >> a[i] >> b[i];
 		a[i] -= '0';
 		s += a[i]*b[i];
	}
	for(int i=s.size();i>0;i--){
		m += s[i-1];
	}
	if(s==m){
		cout << 0;
		return 0;
	}
	for(int i=0;i<s.size();i++){
		if(m[i]!=s[i]){
			c++;
		}
	}
 	cout << c;
 	return 0;
} 
