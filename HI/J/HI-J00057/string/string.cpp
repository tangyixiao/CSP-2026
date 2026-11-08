#include <bits/stdc++.h>
using namespace std;
//aaacccaaa
int main(){
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout);
	int n,m=0;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	int j=s.size()-1;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[j]){
			m++;
		}
	}
	cout<<m;
	return 0;
}
